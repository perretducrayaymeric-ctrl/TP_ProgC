#include <stdio.h>

// Fonction récursive pour calculer la factorielle
int factorielle(int num) {
    if (num == 0) {
        return 1;  // 0! = 1
    } else {
        return num * factorielle(num - 1);
    }
}

int main() {
    int tests[] = {0, 1, 3, 5, 7};  // Valeurs à tester
    int taille = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < taille; i++) {
        int n = tests[i];
        int resultat = factorielle(n);
        printf("%d! = %d\n", n, resultat);
    }

    return 0;
}
