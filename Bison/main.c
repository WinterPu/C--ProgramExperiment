#include <stdio.h>
#include "MiniJ.h"
#include "MiniJ_lex.h"

extern char minij_name[30];
extern char minij_comment[200];
extern int minij_val;

int main(int argc,char *argv[]) {
    yyin = fopen(argv[1],"r");
	yyparse();
}
