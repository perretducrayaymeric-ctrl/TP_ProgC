#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    // Initialiser la graine du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage des tableaux avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        *(tab_int + i) = rand() % 100 + 1;            // int entre 1 et 100
        *(tab_float + i) = ((float)(rand() % 1000)) / 100.0f; // float entre 0.0 et 9.99
    }

    // Affichage avant multiplication
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(tab_int + i));
    }
    printf("\n");

    printf("Tableau de flottants (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(tab_float + i));
    }
    printf("\n");

    // Multiplication par 3 des valeurs dont l'indice est divisible par 2 (0, 2, 4, ...)
    for (int i = 0; i < TAILLE; i += 2) {
        *(tab_int + i) *= 3;
        *(tab_float + i) *= 3.0f;
    }

    // Affichage après multiplication
    printf("\nTableau d'entiers (apres multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(tab_int + i));
    }
    printf("\n");

    printf("Tableau de flottants (apres multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(tab_float + i));
    }
    printf("\n");

    return 0;
}
