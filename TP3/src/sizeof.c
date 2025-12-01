#include <stdio.h>

int main() {
    // Types de base
    printf("La taille de int est : %zu octets\n", sizeof(int));
    printf("La taille de char est : %zu octets\n", sizeof(char));
    printf("La taille de float est : %zu octets\n", sizeof(float));
    printf("La taille de double est : %zu octets\n", sizeof(double));
    
    // Pointeurs simples
    printf("La taille de int* est : %zu octets\n", sizeof(int*));
    printf("La taille de char* est : %zu octets\n", sizeof(char*));
    printf("La taille de float* est : %zu octets\n", sizeof(float*));
    printf("La taille de double* est : %zu octets\n", sizeof(double*));
    
    // Pointeurs doubles
    printf("La taille de int** est : %zu octets\n", sizeof(int**));
    printf("La taille de char** est : %zu octets\n", sizeof(char**));
    printf("La taille de float** est : %zu octets\n", sizeof(float**));
    printf("La taille de double** est : %zu octets\n", sizeof(double**));
    
    // Pointeurs triples
    printf("La taille de int*** est : %zu octets\n", sizeof(int***));
    printf("La taille de char*** est : %zu octets\n", sizeof(char***));
    printf("La taille de float*** est : %zu octets\n", sizeof(float***));
    printf("La taille de double*** est : %zu octets\n", sizeof(double***));

    return 0;
}
