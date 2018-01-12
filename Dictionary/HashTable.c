#include "HashTable.h"

//Creating the hash table and initialize it
table_t* create_table(table_t* table)
{
    table = (table_t*)malloc(sizeof(table_t));
    table->linked_times =0;
    table->Insertion_times=0;
    int i;
    for(i=0;i<Table_SIZE;i++)
    {
     table->table_list[i].next=NULL;
     strcpy( table->table_list[i].key , "\0");
     table->table_list[i].str_length=0;
     table->chain_length[i]=0;
    }
    return table;
}
//Insert the word into the hash table
void Insertion(table_t* table,char* str_word)
{
     unsigned int index = hashStringCRC(str_word)% Table_SIZE;
     if (table->table_list[index].str_length==0)
     {
      strcpy( table->table_list[index].key ,str_word);
      table->table_list[index].str_length = strlen(str_word);
      table->Insertion_times++;
      table-> chain_length[index]++;
     }
     else {
     
     node_t* add_node;
     add_node = (node_t*)malloc(sizeof(node_t));
     add_node->str_length = strlen(str_word);
     strcpy(add_node->key,str_word);
     add_node->next = NULL;
     
     
     node_t* pt = (node_t*)&table->table_list[index];
     while (pt->next !=NULL)
     pt=pt->next;
     pt->next = add_node;
     
     table->Insertion_times++;
     table-> chain_length[index]++;
     table->linked_times++;
     }
}
//Report the table information. Load factor = the entries you inserted / all the buckets
void StatisticsReport(table_t* table)
{
  double load_factor = (double)table->Insertion_times / (double)(table->linked_times+Table_SIZE);
  int i;
  int longest_chain = table->chain_length[0];
  for(i=1;i<Table_SIZE;i++)
  if (longest_chain< table->chain_length[i])
  longest_chain = table->chain_length[i];
  
  printf("load factor %.5lf, %d collisions, longest chain %d\n",load_factor,table->linked_times,longest_chain);
}

//It will firstly turns all the letters in the char-string into lower case.
//Then look up the input-word in the dictionary,if cannot find it ,print it and  
//give the suggested corrections(Only considering one-letter wrong with the same length)
void Spelling_Check(table_t* table ,char* str_word)
{
   int k;
   for (k=0;k<strlen(str_word);k++)
   str_word[k]=tolower(str_word[k]);
   
   unsigned int index = hashStringCRC(str_word)% Table_SIZE;
   node_t* pt = (node_t*)&table->table_list[index];
   while (pt!=NULL)
   {
     if (pt->str_length == strlen(str_word))
     {
        if (strcmp(pt->key,str_word)==0)
        return;
     }
     pt = pt->next;
   }
   printf("%s:",str_word);
   int i;
   for (i=0;i<Table_SIZE;i++)
   {
      node_t* pt = (node_t*)&table->table_list[i];
      while (pt!=NULL)
     { 
       if (pt->str_length == strlen(str_word))
     {
       int j;
       int cmp_count=0;
       for (j=0;j<strlen(str_word);j++)
       {
         if (str_word[j] ==pt->key[j])
         cmp_count++; 
       } 
       if (cmp_count == (strlen(str_word)-1))
          printf(" %s",pt->key);
     }
     pt = pt->next;
     } 
   }
   
   printf("\n");
}

//static  unsigned int BYTE_WIDTH = 8;
static  unsigned int WORD_WIDTH = sizeof(int) * 8;
static  unsigned int CRC_HASH_SHIFT = 5;
unsigned int hashStringCRC(		// Hash a string
    char *key)		// Key to be hashed
    {
    unsigned int hashValue = 0;
    int i = strlen(key);

    for (i=0;i<strlen(key);i++)
	{
	/*
	 * The following expression could be done in one line, but it
	 * would be really nasty, and a modern compiler ought to
	 * generate the same code whether it's one line or several.
	 * So we'll break it up to make it easier to read.
	 *
	 * First, we shift the value left to make room for bits from
	 * the new key character.
	 */
	unsigned int leftShiftedValue = hashValue << CRC_HASH_SHIFT;
	/*
	 * Shifting left lost the top bits, so we have to extract and
	 * position them separately with a right shift.  If we were
	 * writing in assembly, we could do all of this in a single
	 * rotate instruction, but C++ doesn't give us access to that
	 * machine operation so we have to do it the hard way.
	 */
	unsigned int rightShiftedValue =
	  hashValue >> (WORD_WIDTH - CRC_HASH_SHIFT);
	/*
	 * Put the shifted values together, and then XOR them with the
	 * next key character (stepping past it in the process).
	 */
	hashValue = (leftShiftedValue | rightShiftedValue) ^ (unsigned)*(key+i);
	}
    return hashValue;
    }
