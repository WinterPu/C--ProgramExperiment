%{
#include "MiniJ_tree.h"
#include "MiniJ_lex.h"
#include "MiniJ_parse.h"
%}

ID  [A-Za-z][A-Za-z0-9_]*
LIT [0-9][0-9]*
NONNL [^\n]

%%

class		{return CLASS;}
public		{return PUB;}
static		{return STATIC;}
String		{return STR;}
void		{return VOID;}
main		{return MAIN;}
print		{return PRINT;}
int		{return INT;}
if		{return IF;}
else		{return ELSE;}
while		{return WHILE;}
new		{return NEW;}
return		{return RETURN;}
this		{return THIS;}
"&&"		{return AND;}
"<"		{return LT;}
"+"		{return ADD;}
"-"		{return MINUS;}
"*"		{return TIMES;}
"("		{return LP;}
")"		{return RP;}
"["		{return LSP;}
"]"		{return RSP;}
"{"		{return LBP;}
"}"		{return RBP;}
","		{return COMMA;}
";"		{return SEMI;}
"="		{return ASSIGN;}
"."		{return DOT;}
"//"{NONNL}*	{}
{ID}		{sscanf(yytext,"%s", name);
		 yylval.sr = strdup( name );
		 return ID;}
{LIT}		{sscanf(yytext,"%d", &val);
		 yylval.nu = val;
		 return LIT;}
[ \t\n]		{}
.		{}

%%

int yywrap() {return 1;}

/*
void print_lex( int t ) {
    switch( t ) {
    case ID: printf("ID(%s)\n", name);
        break;
    case LIT: printf("LIT(%d)\n", val);
        break;
    case AND: printf("AND\n");
        break;
    case LT: printf("LT\n");
        break;
    case ADD: printf("ADD\n");
        break;
    case MINUS: printf("MINUS\n");
        break;
    case TIMES: printf("TIMES\n");
        break;
    case LP: printf("LP\n");
        break;
    case RP: printf("RP\n");
        break;
    case LSP: printf("LSP\n");
        break;
    case RSP: printf("RSP\n");
        break;
    case LBP: printf("LBP\n");
        break;
    case RBP: printf("RBP\n");
        break;
    case SEMI: printf("SEMI\n");
        break;
    case COMMA: printf("COMMA\n");
        break;
    case ASSIGN: printf("ASSIGN\n");
        break;
    case DOT: printf("DOT\n");
        break;
    case COMMENT: printf("COMMENT (should be skipped)\n");
        break;
    case CLASS: printf("CLASS\n");
        break;
    case PUB: printf("PUBLIC\n");
        break;
    case STATIC: printf("STATIC\n");
        break;
    case VOID: printf("VOID\n");
        break;
    case MAIN: printf("MAIN\n");
        break;
    case INT: printf("INT\n");
        break;
    case IF: printf("IF\n");
        break;
    case ELSE: printf("ELSE\n");
        break;
    case WHILE: printf("WHILE\n");
        break;
    case NEW: printf("NEW\n");
        break;
    case RETURN: printf("RETURN\n");
        break;
    case THIS: printf("THIS\n");
        break;
    default: printf("******** lexical error!!!");
    }
}
*/
