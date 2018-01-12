
extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern FILE *yyout;
extern FILE *yyerr;

extern char name[16];
extern int val;

// The following are for parse trees.

#define sMIN 0
#define sPROG 1
#define sMAINC 2
#define sCDCLS 3
#define sCDCL 4
#define sVDCLS 5
#define sVDCL 6
#define sMDCLS 7
#define sMDCL 8
#define sSTMTS 9
// #define sSTMT 10
#define mBSTMT 10
#define mIF 11
#define mWHILE 12
#define mPRINT 13
#define mASSIGN 14
#define mARRASS 15
#define sRETURN 16
#define sMAX 17

#define eMIN 0
#define eADD 1
#define eMINUS 2
#define eTIMES 3
#define eAND 4
#define eLT 5
#define eARRELE 6
#define eFCALL 7
#define ePAREN 8
#define eDOTOBJ 9
#define eLIT 10
#define eID 11
#define eTHIS 12
#define eNEWARR 13
#define eNEW 14
#define eEXPS 15
#define eEREST 16
#define eFORMALS 17
#define eFREST 18
#define tINTARR 19
#define tINT 20
#define tID 21
#define eMAX 22

typedef struct j_exp {
  int exp_id;
  char name[16];
  int  val;
  struct j_exp *exp1;
  struct j_exp *exp2;
  struct j_exp *next;
} jEXP;

typedef struct j_stm {
  int stm_id;
  struct j_exp *exp1;
  struct j_exp *exp2;
  struct j_stm *stm1;
  struct j_stm *stm2;
  struct j_stm *stm3;
} jSTM;

extern jEXP* create_exp();
extern jSTM* create_stm();
extern void free_exp( jEXP* );
extern void free_stm( jSTM* );
extern void print_exp( jEXP* );
extern void print_stm( jSTM* );
extern jSTM* program;
extern char name[16];
extern int val;

