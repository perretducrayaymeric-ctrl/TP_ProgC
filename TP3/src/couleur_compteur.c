#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Définition de la structure pour une couleur
typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

// Définition de la structure pour une couleur distincte et son compteur
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

// Fonction pour comparer deux couleurs (retourne 1 si égales, 0 sinon)
int couleurs_egales(Couleur c1, Couleur c2) {
    return (c1.r == c2.r) && (c1.g == c2.g) &&
           (c1.b == c2.b) && (c1.a == c2.a);
}

// Fonction pour afficher une couleur
void afficher_couleur(Couleur c) {
    printf("%02x %02x %02x %02x", c.r, c.g, c.b, c.a);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurDistincte distinctes[TAILLE];
    int nb_distinctes = 0;

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des couleurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = rand() % 256;
    }

    // Compter les couleurs distinctes
    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (int j = 0; j < nb_distinctes; j++) {
            if (couleurs_egales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
            distinctes[nb_distinctes].compteur = 1;
            nb_distinctes++;
        }
    }

    // Afficher les couleurs distinctes avec leur compteur
    printf("Couleurs distinctes et occurrences :\n");
    for (int i = 0; i < nb_distinctes; i++) {
        afficher_couleur(distinctes[i].couleur);
        printf(" : %d\n", distinctes[i].compteur);
    }

    return 0;
}
