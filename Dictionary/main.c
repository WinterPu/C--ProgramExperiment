#include <stdio.h>
#include <stdlib.h> 
#include "HashTable.h" 
#define SIZE 255

//Handling Collisions:Linked List 
//Hash Function: hashStringCRC
int main( )
{
   FILE* fp;
   char path[SIZE]={0};
   char buff[SIZE]={0};
   long count=0;
   
   printf("Please Enter the dictionary's path.\n");
   gets(path);
   
   fp=fopen(path,"r");
   if (fp==NULL)
   {
    printf("Open Error.\n");
    system("PAUSE");	
    exit(1);
    }
    
    
    table_t* table;
    table = create_table(table);

    while (fscanf(fp, "%s", buff)!=EOF)
    {
     Insertion(table,buff);
     memset(buff, 0x00, sizeof(char) * 10);
    }

    StatisticsReport(table);
    
    int command=0;
    scanf("%d",&command);
    while (command!=0)
    {
      if (command ==1)
      {
         char input[SIZE]={0};
        // printf("Enter the text you want and end it with Ctrl+Z.\n");
         while (scanf("%s",input)!=EOF)
         Spelling_Check(table,input);

      }
      else if (command ==2)
      {
         fflush(stdin);//This function will be not useful in Visual Studio.
         printf("Please Enter the ipnut file's path.\n");
         gets(path);
   
         FILE* finput;
         finput=fopen(path,"r");
         if (finput==NULL)
         {
         printf("Open Error.\n");
         system("PAUSE");	
         exit(1);
         }
         count=0;
         char ch;
         while ((ch=fgetc(finput))!=EOF)
         printf("%c",ch);
         printf("\n");
         fclose(finput);
         finput=fopen(path,"r");
        while (fscanf(finput, "%s", buff)!=EOF)
        {
        Spelling_Check(table,buff);
        memset(buff, 0x00, sizeof(char) * 10);
        }   
        
        fclose(finput);
      }    
      scanf("%d",&command);
    }
    
    fclose(fp);
    system("PAUSE");	
    return 0;
}

      //Some codes for debuging (Show some table information)
      
     //All in the main.c
    //-------1------put it after (Insertion function)  may 31-line
    //printf("%ld : %s\n",count++, buff );
    //unsigned int value = hashStringCRC(buff);
    //printf("the string %s the value %d \n",buff,value%2001);
    
    //---------2------put it before(StatisticsReport function) may 35-line
    //printf("insertion times:%d\n",table->Insertion_times);
    //printf("Linked times:%d\n",table->linked_times);
    //int i;
    //int chain_c=0;
    //int count_over=0;
    //for(i=0;i<Table_SIZE;i++)
    //if (table->chain_length[i]>20)
    //{
    //printf("%d    times:%d\n",i,table->chain_length[i]);
    //count_over++;
    //}
    //printf("all: %d\n",count_over);
