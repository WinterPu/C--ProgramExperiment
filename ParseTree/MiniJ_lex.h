/*
#define L_MIN 0
#define ID 1
#define LIT 2
#define AND 3
#define LT 4
#define ADD 5
#define MINUS 6
#define TIMES 7
#define COMMENT 8
#define CLASS 9
#define PUB 10
#define STATIC 11
#define VOID 12
#define MAIN 13
#define INT 14
#define IF 15
#define ELSE 16
#define WHILE 17
#define NEW 18
#define RETURN 19
#define THIS 20
#define LP 21
#define RP 22
#define LSP 23
#define RSP 24
#define LBP 25
#define RBP 26
#define SEMI 27
#define COMMA 28
#define ASSIGN 29
#define DOT 30
#define L_MAX 31
*/

extern int yylex();
extern FILE *yyin;

extern void print_lex( int );

extern char name[16];
extern int val;

