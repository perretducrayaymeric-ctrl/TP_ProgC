#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i;
    int max, min;

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre 1 et 1000
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1; // rand() % 1000 → 0 à 999, +1 → 1 à 1000
    }

    // Initialiser max et min avec le premier élément du tableau
    max = tableau[0];
    min = tableau[0];

    // Parcourir le tableau pour trouver le plus grand et le plus petit nombre
    for (i = 1; i < 100; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    // Afficher les résultats
    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
