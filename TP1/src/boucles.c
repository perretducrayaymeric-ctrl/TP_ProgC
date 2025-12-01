#include <stdio.h>

int main() {
    int compteur = 5;  // Change la valeur pour tester (DOIT être < 10)

    if (compteur >= 10 || compteur < 1) {
        printf("Erreur : compteur doit etre entre 1 et 9.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {

        for (int j = 1; j <= i; j++) {

            // À partir de la 3e ligne -> l'intérieur devient '#'
            if (i >= 3 && j > 1 && j < i) {
                printf("# ");
            } else {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}
