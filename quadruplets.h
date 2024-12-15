#ifndef QUADRUPLETS_H
#define QUADRUPLETS_H

// Maximum size of the quadruplets array
#define MAX_QUADS 1000

// Structure to represent a quadruplet
typedef struct {
    char op[20];      // Operation
    char arg1[20];    // First argument
    char arg2[20];    // Second argument
    char result[20];  // Result
} qdr;

// Global variables
extern qdr quad[MAX_QUADS]; // Array to hold quadruplets
extern int qc;              // Quadruplet counter

// Function declarations
void quadr(char op[], char arg1[], char arg2[], char result[]);
void update_quad(int num_quad, int column_quad, char val[]);
void print_quad();

#endif // QUADRUPLETS_H
