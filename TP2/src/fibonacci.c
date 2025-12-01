#include <stdio.h>

int main() {
    int n = 7; // Nombre de termes à générer
    int U0 = 0, U1 = 1; // Premiers termes de la suite
    int next; // Variable pour stocker le terme suivant

    // Affichage des deux premiers termes
    if (n >= 1) printf("%d", U0);
    if (n >= 2) printf(", %d", U1);

    // Boucle pour générer et afficher les termes suivants
    for (int i = 2; i < n; i++) {
        next = U0 + U1; // Calcul du terme suivant
        printf(", %d", next);
        U0 = U1;  // Mise à jour des termes
        U1 = next;
    }

    printf("\n"); // Nouvelle ligne après l'affichage
    return 0;
}
