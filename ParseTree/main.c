#include <stdio.h>
#include "MiniJ_tree.h"
#include "MiniJ_lex.h"
#include "MiniJ_parse.h"

char name[16];
int val;
jSTM* program = NULL;

int main(int argc,char *argv[]) {
    int t;

    yyin = fopen(argv[1],"r");
    for(t=0; (t<13) && (argv[1][t]!='\0') && (argv[1][t]!='.'); t++)
      name[t] = argv[1][t];
    name[t++] = '.';
    name[t++] = 'c';
    name[t++] = '\0';
    yyout = fopen(name,"w");

    yyparse();
/*
    fprintf(stderr, "MiniJ2c parses %s successfully!\n\n", argv[1]);
*/

    print_stm( program );

    fprintf(stderr, "MiniJ2c compiles %s successfully!\n\n", argv[1]);
    free_stm( program );
}

