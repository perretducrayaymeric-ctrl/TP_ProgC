#include <stdio.h>

int main() {
    char str1[] = "Hello";    // Première chaîne
    char str2[] = " World!";  // Deuxième chaîne
    char copy[100];           // Pour copier str1
    char concat[200];         // Pour concaténer str1 et str2
    int i, j;

    // 1. Calculer la longueur de str1
    int longueur = 0;
    while (str1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de str1: %d\n", longueur);

    // 2. Copier str1 dans copy
    i = 0;
    while (str1[i] != '\0') {
        copy[i] = str1[i];
        i++;
    }
    copy[i] = '\0'; // Terminer la chaîne copiée
    printf("Copie de str1: %s\n", copy);

    // 3. Concaténer str1 et str2 dans concat
    // Copier d'abord str1
    i = 0;
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }

    // Ajouter str2 après str1
    j = 0;
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0'; // Terminer la chaîne concaténée
    printf("Concaténation de str1 et str2: %s\n", concat);

    return 0;
}
