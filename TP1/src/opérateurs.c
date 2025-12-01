#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);      // division entière
    printf("Modulo : %d %% %d = %d\n", a, b, a % b);

    // Comparaisons logiques
    printf("a == b : %d\n", a == b);   // 1 = vrai, 0 = faux
    printf("a > b : %d\n", a > b);

    return 0;
}
