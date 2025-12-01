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

// Fonction pour rechercher un entier dans le tableau
int rechercher_entier(int tab[], int taille, int val) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == val) {
            return 1; // Trouvé
        }
    }
    return 0; // Non trouvé
}

int main() {
    int tableau[TAILLE];
    int valeur;

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des nombres aléatoires entre -100 et 100
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 201 - 100; // -100 à 100
    }

    // Afficher le tableau
    printf("Tableau :\n");
    afficher_tableau(tableau, TAILLE);

    // Demander à l'utilisateur l'entier à chercher
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Rechercher l'entier et afficher le résultat
    if (rechercher_entier(tableau, TAILLE, valeur)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
