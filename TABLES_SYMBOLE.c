#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TABLES_SYMBOLE.h"


type_idf_cst tab_idf_cst[10000];
type_kw_sep tab_sep[10000];
type_kw_sep tab_kw[10000];
int count_idf_cst = 0;
int count_kw = 0;
int count_sep = 0;


// t = 0 TS DES CST ET IDF , t = 1 TS DES SEP ,t = 2 TS DES KW
int recherche(char entity[],int t){
    int i=0;
    switch (t)
    {
    case 0 :
        while(i<count_idf_cst){
             if(strcmp(entity,tab_idf_cst[i].name)==0) {
                return i;
             }
             i++;
        }   return -1;
       
        break;
    case 1 :
    while(i<count_sep){
        if(strcmp(entity,tab_sep[i].name)==0) {
            return 1;
        }
        i++;
    }
        return -1;
    break;
    case 2 :  
      
       while(i<count_kw){
        if(strcmp(entity,tab_kw[i].name)==0) {
            return 2;
       }
       i++;
       }
       return -1;
        break;
    }

}


int insere (char entity[],char code[],char type [],float value ,int t){
    switch (t)
    {
    case 0 :
         if(recherche(entity,0)==-1){
            strcpy(tab_idf_cst[count_idf_cst].name,entity);
            strcpy(tab_idf_cst[count_idf_cst].code,code);
            strcpy(tab_idf_cst[count_idf_cst].type,type);
             tab_idf_cst[count_idf_cst].value=value;
             count_idf_cst++;
         }
    break;
    case 1:
        if (recherche(entity,1)==-1)
        {
            strcpy(tab_sep[count_sep].name,entity);
            strcpy(tab_sep[count_sep].code,code);
            count_sep++;
        }
        break;
    case 2:
       if (recherche(entity,2)==-1)
       {
          strcpy(tab_kw[count_kw].name,entity);
          strcpy(tab_kw[count_kw].code,code);
          count_kw++;
       }
       
        break;
    }

}

void print(){
     printf("\n**********TABLE DES SYMBOLE DES CST ET IDF **********");
     printf("\n---------------------------------------------------------\n");
     printf("\t|    NAME    |    CODE     |    TYPE    |    VALUE     |\n");
     printf("\n---------------------------------------------------------\n"); 
     int i=0;
     while (i<count_idf_cst)
     {
        printf("\t|%10s | %15s | %12s | %12f |\n",tab_idf_cst[i].name,tab_idf_cst[i].code,tab_idf_cst[i].type,tab_idf_cst[i].value);
        i++;
     }

     printf("\n**********TABLE DES MOTS CLES **********");
     printf("\n---------------------------------------------------------\n");
     printf("\t|    NAME    |    CODE     |\n");
     printf("\n---------------------------------------------------------\n"); 
     int j=0;
     while (j<count_kw)
     {
        printf("\t|%10s | %15s  |\n",tab_kw[j].name,tab_kw[j].code);
        j++;
     }
     
     printf("\n**********TABLE DES SEP **********");
     printf("\n---------------------------------------------------------\n");
     printf("\t|    NAME    |    CODE     |\n");
     printf("\n---------------------------------------------------------\n"); 
     int k=0;
     while (k<count_sep)
     {
        printf("\t|%10s | %15s  |\n",tab_sep[k].name,tab_sep[k].code);
        k++;
     }


}

int check_declaration(char entity[]){
    int i=recherche(entity,0);
    if(i!=-1 && strcmp(tab_idf_cst[i].type,"")==0){
        return 0;
    }
   return -1;
}

int insere_types (char entity[],char type []){
       
         if(recherche(entity,0)!=-1){
            int x=recherche(entity,0);
            strcpy(tab_idf_cst[x].type,type);
         }
   

}

















