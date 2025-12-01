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

// Fonction de tri à bulles (pour générer le tableau trié)
void tri_bulles(int tab[], int taille) {
    int temp;
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

// Fonction de recherche dichotomique
int recherche_dichotomique(int tab[], int taille, int valeur) {
    int debut = 0;
    int fin = taille - 1;
    
    while (debut <= fin) {
        int milieu = debut + (fin - debut) / 2;
        
        if (tab[milieu] == valeur) {
            return 1; // trouvé
        } else if (tab[milieu] < valeur) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }
    return 0; // non trouvé
}

int main() {
    int tableau[TAILLE];
    int valeur;

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des nombres aléatoires entre -100 et 100
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 201 - 100; // -100 à 100
