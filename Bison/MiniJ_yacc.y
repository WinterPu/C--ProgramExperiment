%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "MiniJ.h"
%}
%token CLASS ID LBP PUBLIC STATIC VOID MAIN LP STRING LSP RSP RP RBP
%token EXTENDS SEMI RETURN  COMMA
%token BOOLEAN IF ELSE  WHILE PRINT  
%token NUM TRUE FALSE THIS 
%token INT
%token LENGTH  SYSTEMPRINT LB RB  ASSIGN TAN COMMENT INTEGER_LITERAL

%left NOT DOT AND
%left EQ  LT  LP NEW 
%left ADD MINUS
%left TIMES


%%
prog 	:	mainclass classdel  {printf("prog =>mainclass classdel* \n********Parsed OK!**********\n");}
		|  {printf("********Parsing failed! \n");}
		;

mainclass : CLASS ID LB PUBLIC STATIC VOID MAIN LP STRING LSP RSP ID RP LB  statement RB RB {printf("mainclass => CLASS ID LB PUBLIC STATIC VOID MAIN LP STRING LSP RSP ID RP LB  statement* RB RB \n"); }
		      ;
classdel :	CLASS ID EXTENDS ID LB vardecl mathoddecl RB classdel{printf("classdel =>CLASS ID EXTENDS ID LB vardecl* mathoddecl* RB\n");}	 
		    |   CLASS ID LB vardecl mathoddecl RB classdel{printf("classdel =>CLASS ID LB vardecl* mathoddecl* RB\n");}	
		    |
			;
			
vardecl :type ID SEMI vardecl {printf("vardecl =>type ID SEMI\n");}	
        |
	;

mathoddecl: PUBLIC type ID LP formallist RP LB vardecl statement RETURN exp SEMI RB  mathoddecl {printf("PUBLIC type ID LP formallist RP LB vardecl* statement* RETURN exp SEMI RB\n");}	
				|
				;

formallist : type ID formalrest {printf("formal  =>type ID formalrest*\n");}	
          | {printf("formal =>NULL\n");}	
		;
		
formalrest : COMMA type ID formalrest {printf("formalrest =>COMMA type ID\n");}	
				|
				;

type : INT LSP RSP {printf("type =>INT LSP RSP\n");}	
       | BOOLEAN {printf("type =>BOOLEAN\n");}	
       |INT {printf("type =>INT\n");}	
       ;
	  
statement : LBP statement RB  statement {printf("statement =>LBP statement* RB\n");}		
				| IF LP exp RP statement ELSE statement statement {printf("statement =>IF LP exp RP statement ELSE statement\n");}	
				| WHILE LP exp RP statement  statement {printf("WHILE LP exp RP statement\n");}	
				| SYSTEMPRINT LP exp RP SEMI statement {printf("statement =>PRINT LP exp RP SEMI\n");}	
				| ID ASSIGN exp SEMI statement  {printf("statement =>ID ASSIGN exp SEMI\n");}	
				| ID LSP exp RSP EQ exp SEMI statement  {printf("statement =>ID LSP exp RSP EQ exp SEMI\n");}
				|
				;

exp : exp ADD exp {printf("exp =>exp ADD exp\n");}
      | exp MINUS exp  {printf("exp =>exp MINUS exp\n");}
      | exp TIMES exp  {printf("exp =>exp TIMES exp\n");}
      | exp AND exp {printf("exp =>exp AND exp\n");}
      | exp  LT exp {printf("exp =>exp  LT exp\n");}
      | ID LSP exp RSP  {printf("exp => exp LSP exp RSP\n");}
      | ID LP  explist RP  {printf("exp => exp LP  exp RP\n");}	
      | LP exp RP {printf("exp =>LP exp RP\n");}	
      | exp DOT exp {printf("exp =>exp DOT exp\n");}	
      | INTEGER_LITERAL {printf("exp =>INTEGER_LITERAL\n");}	
      | TRUE {printf("exp =>TRUE\n");}	
      | FALSE  {printf("exp =>FALSE\n");}	
      | ID {printf("exp =>ID\n");}	
      | THIS {printf("exp =>THIS\n");}	
      | NEW INT LSP exp RSP {printf("exp =>NEW INT LSP exp RSP \n");}	
      | NEW ID LP RP  {printf("exp =>NEW ID LP RP\n");}	
      | NOT exp  {printf("exp =>NOT exp\n");}	
      ;
	
explist : exp exprest  {printf("explist =>exp exprest*\n");}	
          | {printf("explist =>NULL\n");}	
	  ;

exprest : COMMA exp exprest {printf("exprest =>COMMA exp \n");}
	  |
          ; 	  
		
%%

int yyerror(char *s)
{
	printf("%s\n",s);
}
