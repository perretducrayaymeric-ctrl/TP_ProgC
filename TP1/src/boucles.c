#include <stdio.h>

int main() {
    int compteur = 5;  // à modifier pour tester (doit rester < 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être < 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
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
