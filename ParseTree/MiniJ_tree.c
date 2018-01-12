#include <stdio.h>
#include <stdlib.h>
#include "MiniJ_lex.h"
#include "MiniJ_tree.h"

jEXP* create_exp ( ) {
  jEXP* tmp;
  tmp = (struct j_exp *)malloc(sizeof(struct j_exp));
  if( tmp ) {
    tmp->exp_id = eMIN;
    tmp->name[0] = '\0';
    tmp->val = 0;
    tmp->exp1 = NULL;
    tmp->exp2 = NULL;
    tmp->next = NULL;
  }
  return tmp;
}

jSTM* create_stm ( ) {
  jSTM* tmp;
  tmp = (struct j_stm *)malloc(sizeof(struct j_stm));
  if( tmp ) {
    tmp->stm_id = sMIN;
    tmp->exp1 = NULL;
    tmp->exp2 = NULL;
    tmp->stm1 = NULL;
    tmp->stm2 = NULL;
    tmp->stm3 = NULL;
  }
  return tmp;
}

void free_exp ( jEXP* p ) {
  if( p ) {
    if( p->exp1 ) free_exp( p->exp1 );
    if( p->exp2 ) free_exp( p->exp2 );
    if( p->next ) free_exp( p->next );
    free( p );
  }
}

void free_stm ( jSTM* p ) {
  if( p ) {
    if( p->exp1 ) free_exp( p->exp1 );
    if( p->exp2 ) free_exp( p->exp2 );
    if( p->stm1 ) free_stm( p->stm1 );
    if( p->stm2 ) free_stm( p->stm2 );
    if( p->stm3 ) free_stm( p->stm3 );
    free( p );
  }
}

void print_exp ( jEXP* p ) {
  jEXP* te;
  if( p ) {
    switch( p->exp_id ) {
    case eADD: print_exp( p->exp1 );
	       fprintf(yyout, " + ");
	       print_exp( p->exp2 );
	       break;
    case eMINUS: print_exp( p->exp1 );
		 fprintf(yyout, " - ");
		 print_exp( p->exp2 );
		 break;
    case eTIMES: print_exp( p->exp1 );
		 fprintf(yyout, " * ");
		 print_exp( p->exp2 );
		 break;
    case eAND: print_exp( p->exp1 );
	       fprintf(yyout, " && ");
	       print_exp( p->exp2 );
	       break;
    case eLT: print_exp( p->exp1 );
	      fprintf(yyout, " < ");
	      print_exp( p->exp2 );
	      break;
    case eARRELE: fprintf(yyout, "%s[", p->name);
		  print_exp( p->exp1 );
		  fprintf(yyout, "]");
		  break;
    case eFCALL: print_exp( p->exp1 );
		 fprintf(yyout, "(");
		 print_exp( p->exp2 );
		 fprintf(yyout, ")");
		 break;
    case ePAREN: fprintf(yyout, "(");
		 print_exp( p->exp1 );
		 fprintf(yyout, ")");
		 break;
    case eDOTOBJ: te = p->exp1;
		  if( (te->exp_id != eTHIS) && (te->exp_id != eNEW) ) {
		    print_exp( p->exp1 );
		    fprintf(yyout, ".");
		  }
		  print_exp( p->exp2 );
		  break;
    case eLIT: fprintf(yyout, "%d", p->val);
	       break;
    case eID: fprintf(yyout, "%s", p->name);
	      break;
    case eTHIS: break;
    case eNEWARR: fprintf(yyout, "int %s[", p->name);
		  print_exp( p->exp1 );
		  fprintf(yyout, "]");
		  break; // Maybe not correct yet!
    case eNEW: fprintf(yyout, "new %s", p->name);
	       break; // Maybe not correct yet!
    case eEXPS: print_exp( p->exp1 );
		print_exp( p->exp2 );
		break;
    case eEREST: fprintf(yyout, ", ");
		 print_exp( p->exp1 );
		 print_exp( p->exp2 );
		 break;
    case eFORMALS: print_exp( p->exp1 );
		   fprintf(yyout, " %s", p->exp1->name);
		   break;
    case eFREST: fprintf(yyout, ", ");
		 print_exp( p->exp1 );
		 fprintf(yyout, " %s", p->exp1->name);
		 break;
    case tINTARR: fprintf(yyout, "int[] ");
		  break; // Maybe not correct yet!
    case tINT: fprintf(yyout, "int ");
	       break; // Maybe not correct yet!
    case tID: fprintf(yyout, "%s ", p->name);
	      break; // Maybe not correct yet!
    default: fprintf(stderr, "******* An error in expressions!\n");
	     break;
    }
  }
}

void print_stm ( jSTM* p ) {
  jEXP *te;
  jSTM *ts;
  if( p ) {
    switch( p->stm_id ) {
    case sPROG: fprintf(yyout, "#include <stdio.h>\n\n");
		print_stm( p->stm2 );
	        print_stm( p->stm1 );
	        break;
    case sMAINC: fprintf(yyout, "main() {\n");
		 print_stm( p->stm1 );
	         print_stm( p->stm2 );
		 fprintf(yyout, "}\n");
	         break;
    case sCDCLS: print_stm( p->stm1 );
	         print_stm( p->stm2 );
	         break;
    case sCDCL: print_stm( p->stm1 );
		print_stm( p->stm2 );
	        break;
    case sVDCLS: print_stm( p->stm1 );
	         print_stm( p->stm2 );
	         break;
    case sVDCL: te = p->exp1;
		print_exp( te );
		fprintf(yyout, " %s;\n", te->name);
	        break;
    case sMDCLS: print_stm( p->stm1 );
	         print_stm( p->stm2 );
	         break;
    case sMDCL: te = p->exp1;
		print_exp( te );
		fprintf(yyout, " %s ( ", te->name);
		print_exp( p->exp2 );
		fprintf(yyout, " ) {\n");
		print_stm( p->stm1 );
	        print_stm( p->stm2 );
		fprintf(yyout, "return ");
		print_exp( p->stm3->exp1 );
		fprintf(yyout, ";\n");
		fprintf(yyout, "}\n\n");
	        break;
    case sSTMTS: print_stm( p->stm1 );
		 print_stm( p->stm2 );
		 fprintf(yyout, "\n");
	         break;
    case mBSTMT: fprintf(yyout, "{");
		 print_stm( p->stm1 );
		 fprintf(yyout, "}\n");
	         break;
    case mIF: fprintf(yyout, "if ( ");
	      print_exp( p->exp1 );
	      fprintf(yyout, " )\n");
	      print_stm( p->stm1 );
	      fprintf(yyout, "else\n");
	      print_stm( p->stm2 );
	      fprintf(yyout, "\n");
	      break;
    case mWHILE: fprintf(yyout, "while ( ");
		 print_exp( p->exp1 );
		 fprintf(yyout, " )\n");
		 print_stm( p->stm1 );
		 fprintf(yyout, "\n");
		 break;
    case mPRINT: fprintf(yyout, "printf(\"%%d\\n\", ");
		 print_exp( p->exp1 );
		 fprintf(yyout, ");\n");
		 break;
    case mASSIGN: print_exp( p->exp1 );
		  fprintf(yyout, " = ");
		  print_exp( p->exp2 );
		  fprintf(yyout, ";\n");
		  break;
    case mARRASS: te = p->exp1;
		  fprintf(yyout, "%s\[", te->name);
		  print_exp( te->exp1 );
		  fprintf(yyout, " = ");
		  print_exp( p->exp2 );
		  fprintf(yyout, ";\n");
		  break;
    default: fprintf(stderr, "******* An error in statements!\n");
	     break;
    }
  }
}


