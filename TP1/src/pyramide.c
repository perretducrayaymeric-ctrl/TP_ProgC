
#include <stdio.h>

int main() {
    int n = 5;  // hauteur de la pyramide
    int i, j;

    for (i = 1; i <= n; i++) {

        // 1. Afficher les espaces (n - i)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2. Nombres croissants : 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Nombres décroissants : i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Ligne suivante
        printf("\n");
    }

    printf("Pyramide complete.\n");

    return 0;
}
