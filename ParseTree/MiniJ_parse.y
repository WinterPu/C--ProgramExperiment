%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "MiniJ_tree.h"
	#include "MiniJ_lex.h"
	#include "MiniJ_parse.h"
%}

%token CLASS PUB STATIC
%left  AND
%left  LT
%left  ADD MINUS
%left  TIMES
%token LBP RBP LSP RSP LP RP
%token INT
%token IF ELSE
%token WHILE PRINT
%token ASSIGN
%token VOID MAIN STR
%token RETURN
%token SEMI COMMA
%token THIS NEW DOT
%token ID LIT
%token COMMENT

%union{ 
		jSTM* sm;
		jEXP* ex;
		int   nu;
		char* sr;
	}

%type <sm> prog
%type <sm> mainc
%type <sm> cdcls
%type <sm> cdcl
%type <sm> vdcls
%type <sm> vdcl
%type <sm> mdcls
%type <sm> mdcl
%type <ex> formals
%type <ex> frest
%type <ex> type
%type <sm> stmts
%type <sm> stmt
%type <ex> exp
%type <ex> exps
%type <ex> erest
%type <nu> LIT
%type <sr> ID

%expect 20

%%
prog	:	mainc cdcls
		{ 
		  program = create_stm();
		  program->stm_id = sPROG;
		  program->stm1 = $1;
		  program->stm2 = $2;
		  $$ = program;
		}
	|
		{ 
		  program = NULL;
		  $$ = program;
		  fprintf(stderr, "****** Parsing failed!\n");
		}
	;

mainc	:	CLASS ID LBP PUB STATIC VOID MAIN LP STR LSP RSP ID RP LBP vdcls stmts RBP RBP
		{ $$ = create_stm();
		  $$->stm_id = sMAINC;
		  $$->exp1 = create_exp();
		  $$->exp1->exp_id = eID;
		  strcpy($$->exp1->name, $2);
		  $$->exp2 = create_exp();
		  $$->exp2->exp_id = eID;
		  strcpy($$->exp2->name, $12);
		  $$->stm1 = $15;
		  $$->stm2 = $16;
		}
	;

cdcls	:	cdcl cdcls
		{ 
		  $$ = create_stm();
		  $$->stm_id = sCDCLS;
		  $$->stm1 = $1;
		  $$->stm2 = $2;
		}
	|
		{ 
			$$ = NULL;
		}
	;

cdcl	:	CLASS ID LBP vdcls mdcls RBP
		{ $$ = create_stm();
		  $$->stm_id = sCDCL;
		  $$->exp1 = create_exp();
		  $$->exp1->exp_id = eID;
		  strcpy($$->exp1->name, $2);
		  $$->stm1 = $4;
		  $$->stm2 = $5;
		}
	;

vdcls	:	vdcl vdcls
		{ $$ = create_stm();
		  $$->stm_id = sVDCLS;
		  $$->stm1 = $1;
		  $$->stm2 = $2;
		}
	|
		{ $$ = NULL;
		}
	;

vdcl	:	type ID SEMI
		{ 
		  $$ = create_stm();
		  $$->stm_id = sVDCL;
		  $$->exp1 = $1;
		  strcpy($$->exp1->name, $2);
		}
	;

mdcls	:	mdcl mdcls
		{	
		  $$ = create_stm();
		  $$->stm_id = sMDCLS;
		  $$->stm1 = $1;
		  $$->stm2 = $2;
		}
	|
		{
			$$ = NULL;
		}
	;

mdcl	:	PUB type ID LP formals RP LBP vdcls stmts RETURN exp SEMI RBP
		{
		  $$ = create_stm();
		  $$->stm_id = sMDCL;
		  $$->exp1 = $2;
		  strcpy($$->exp1->name, $3);
		  $$->exp2 = $5;
		  $$->stm1 = $8;
		  $$->stm2 = $9;
 		  $$->stm3 = create_stm();
		  $$->stm3->exp1 = $11;
		}
	;

formals	:	type ID frest
		{ $$ = create_exp();
		  $$->exp_id = eFORMALS;
		  $$->exp1 = $1;
		  strcpy($$->exp1->name, $2);
		  $$->next = $3;
		}
	|
		{ 
			$$ = NULL;
		}
	;

frest	:	COMMA type ID frest
		{ 
		  $$ = create_exp();
		  $$->exp_id = eFREST;
		  $$->exp1 = $2;
		  strcpy($$->exp1->name, $3);
		  $$->next = $4;
		}
	|
		{
		  $$ = NULL;
		}
	;

type	:	INT LSP RSP
		{
		  $$ = create_exp();
		  $$->exp_id = tINTARR;		
		}
	|	INT
		{
		  $$ = create_exp();
		  $$->exp_id = tINT;	
		}
	|	ID
		{
		  $$ = create_exp();
		  $$->exp_id = tID;
		  strcpy($$->name, $1);
		}
	;

stmts	:	stmt stmts
		{
		  $$ = create_stm();
		  $$->stm_id = sSTMTS;
		  $$->stm1 = $1;
		  $$->stm2 = $2;
		}
	|
		{
			$$ = NULL;
		}
	;

stmt	:	LBP stmts RBP
		{
		  $$ = create_stm();
		  $$->stm_id = mBSTMT;
		  $$->stm1 = $2;
		}
	|	IF LP exp RP stmt ELSE stmt
		{
		  $$ = create_stm();
		  $$->stm_id = mIF;
 		  $$->exp1 = $3;
		  $$->stm1 = $5;
 		  $$->stm2 = $7;
		}
	|	WHILE LP exp RP stmt
		{
		  $$ = create_stm();
		  $$->stm_id = mWHILE ;
 		  $$->exp1 = $3;
		  $$->stm1 = $5;	
		}
	|	PRINT LP exp RP SEMI
		{
		  $$ = create_stm();
		  $$->stm_id = mPRINT ;
 		  $$->exp1 = $3;
		}
	|	ID ASSIGN exp SEMI
		{
		  $$ = create_stm();
		  $$->stm_id = mASSIGN ;
 		  $$->exp1 = create_exp();
		  $$->exp1->exp_id = eID;	  
		  strcpy($$->exp1->name, $1);		  
 		  $$->exp2 = $3;
		}
	|	ID LSP exp RSP ASSIGN exp SEMI
		{
		  $$ = create_stm();
		  $$->stm_id = mARRASS ;
		  strcpy($$->exp1->name, $1);
		  $$->exp1->exp1 = $3;
		  $$->exp2 = $6;
		}
	;

exp	:	exp ADD exp
		{
		  $$ = create_exp();
		  $$->exp_id = eADD;
		  $$->exp1 = $1;
		  $$->exp2 = $3;
		}
	|	exp MINUS exp
		{
		  $$ = create_exp();
		  $$->exp_id = eMINUS;
		  $$->exp1 = $1;
		  $$->exp2 = $3;
		}
	|	exp TIMES exp
		{
		  $$ = create_exp();
		  $$->exp_id = eTIMES;
		  $$->exp1 = $1;
		  $$->exp2 = $3;
		}
	|	exp AND exp
		{
		  $$ = create_exp();
		  $$->exp_id = eAND;
		  $$->exp1 = $1;
		  $$->exp2 = $3;
		}
	|	exp LT exp
		{
		  $$ = create_exp();
		  $$->exp_id = eLT;
		  $$->exp1 = $1;
		  $$->exp2 = $3;
		}
	|	ID LSP exp RSP
		{
		  $$ = create_exp();
		  $$->exp_id = eARRELE;
		  $$->exp1 = $3;
		  strcpy($$->name, $1);	
		}
	|	exp LP exps RP
		{
		  $$ = create_exp();
		  $$->exp_id = eFCALL ;
		  $$->exp1 = $1;
		  $$->exp2 = $3;		
		}
	|	LP exp RP
		{
		  $$ = create_exp();
		  $$->exp_id = ePAREN;
		  $$->exp1 = $2;
		}
	|	exp DOT exp
		{
		  $$ = create_exp();
		  $$->exp_id = eDOTOBJ ;
		  $$->exp1 = $1;
		  $$->exp2 = $3;		
		}
	|	LIT
		{
		  $$ = create_exp();
		  $$->exp_id =eLIT;
 		  $$->val = $1;	
		}
	|	ID
		{
		  $$ = create_exp();
		  $$->exp_id =eID;
		  strcpy($$->name, $1);		  
		}
	|	THIS
		{
		  $$ = create_exp();
		  $$->exp_id =eTHIS;
		}
	|	NEW INT LSP exp RSP
		{
		  $$ = create_exp();
		  $$->exp_id =eNEWARR;
		  $$->exp1 = $4;
		}
	|	NEW ID LP RP
		{
		  $$ = create_exp();
		  $$->exp_id =eNEW;
		  strcpy($$->name, $2);
		}
	;

exps	:	exp erest
		{
		 $$ = create_exp();
		 $$->exp_id =eEXPS;
		  $$->exp1 = $1;
		  $$->exp2 = $2;			
		}
	|
		{
			$$ = NULL;
		}
	;

erest	:	COMMA exp erest
		{
		 $$ = create_exp();
		 $$->exp_id =eEREST;
		  $$->exp1 = $2;
		  $$->exp2 = $3;	
		}
	|
		{
			$$ = NULL;		
		}
	;

%%

int yyerror(char *s)
{
	printf("%s\n",s);
}

