#include <stdio.h>

int main() {
    // Déclaration des variables et initialisation
    int a = 2;   // base
    int b = 3;   // exposant
    int resultat = 1;  // initialisation du résultat à 1

    // Boucle pour calculer la puissance
    for(int i = 0; i < b; i++) {
        resultat *= a;  // multiplication répétée
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);

    return 0;
}
