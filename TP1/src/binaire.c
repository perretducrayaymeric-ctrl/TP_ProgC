#include <stdio.h>

int main() {
    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int nb_tests = 5;

    for (int t = 0; t < nb_tests; t++) {

        int n = valeurs[t];
        printf("Nombre : %d\nBinaire : ", n);

        // On parcourt les 32 bits de l'entier
        for (int i = 31; i >= 0; i--) {
            int mask = 1 << i;

            if (n & mask)
                printf("1");
            else
                printf("0");

            // Optionnel : espace tous les 4 bits pour plus de lisibilité
            if (i % 4 == 0) printf(" ");
        }

        printf("\n\n");
    }

    return 0;
}
