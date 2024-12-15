#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Type definitions (declarations)
typedef struct {
    char name[20];
    char code[20];
    char type[20];
    float value;
} type_idf_cst;

typedef struct {
    char name[20];
    char code[20];
} type_kw_sep;

// Global variables
extern type_idf_cst tab_idf_cst[10000];
extern type_kw_sep tab_sep[10000];
extern type_kw_sep tab_kw[10000];
extern int count_idf_cst;
extern int count_kw;
extern int count_sep;

// Function prototypes
int recherche(char entity[], int t);
int insere(char entity[], char code[], char type[], float value, int t);
void print();

#endif // SYMBOL_TABLE_H
