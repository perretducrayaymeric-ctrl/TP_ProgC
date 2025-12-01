#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Fonction pour afficher un tableau
void afficher_tableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// Fonction de tri à bulles
void tri_bulles(int tab[], int taille) {
    int temp;
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                // Échange des éléments
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[TAILLE];

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des nombres aléatoires entre -100 et 100
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 201 - 100; // -100 à 100
    }

    // Afficher le tableau non trié
    printf("Tableau non trié :\n");
    afficher_tableau(tableau, TAILLE);

    // Trier le tableau
    tri_bulles(tableau, TAILLE);

    // Afficher le tableau trié
    printf("Tableau trié par ordre croissant :\n");
    afficher_tableau(tableau, TAILLE);

    return 0;
}
