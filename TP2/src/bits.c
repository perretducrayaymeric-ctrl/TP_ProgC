#include <stdio.h>

int main() {
    int d = 0x00100008; // Exemple de valeur (en hexadécimal)
    int n_bits = sizeof(int) * 8; // Nombre de bits dans un int

    // Décalage pour obtenir le 4ème bit de gauche
    int bit4 = (d >> (n_bits - 4)) & 1;

    // Décalage pour obtenir le 20ème bit de gauche
    int bit20 = (d >> (n_bits - 20)) & 1;

    // Vérification si les deux bits sont 1
    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
