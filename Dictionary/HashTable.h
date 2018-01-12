#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <string.h>
#include <ctype.h> 

#define Str_Size 100
#define Table_SIZE 4027
//---Table-SIZE--Setting this larger: 
//the shorter chain and less collision but with more space cost.

typedef struct node node_t;
typedef struct node{
    char key[Str_Size];
    node_t* next;
    int str_length;
}node_t;

typedef struct hash_table table_t;
typedef struct hash_table{
    unsigned int linked_times;
    unsigned int Insertion_times;
    node_t table_list[Table_SIZE];
    int chain_length[Table_SIZE];
}table_t;


table_t* create_table(table_t*);
void Insertion(table_t*,char*);

void StatisticsReport(table_t* );
void Spelling_Check(table_t* , char*);

extern unsigned int	hashStringCRC(char *key);
				// Hash a string using the fake-CRC XOR method
#endif
