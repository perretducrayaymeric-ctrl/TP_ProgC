#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage : %s <opérateur> <num1> [num2]\n", argv[0]);
        printf("Opérateurs : +, -, *, /, %%, &, |, ~\n");
        return 1;
    }

    char op = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = 0; // valeur par défaut pour les opérations binaires

    if (op != '~') {
        if (argc < 4) {
            printf("Erreur : deux nombres sont requis pour l'opération '%c'.\n", op);
            return 1;
        }
        num2 = atoi(argv[3]);
    }

    int result;

    switch (op) {
        case '+':
            result = somme(num1, num2);
            break;
        case '-':
            result = difference(num1, num2);
            break;
        case '*':
            result = produit(num1, num2);
            break;
        case '/':
            result = quotient(num1, num2);
            break;
        case '%':
            result = modulo(num1, num2);
            break;
        case '&':
            result = et_bitwise(num1, num2);
            break;
        case '|':
            result = ou_bitwise(num1, num2);
            break;
        case '~':
            result = negation(num1);
            break;
        default:
            printf("Opérateur non valide.\n");
            return 1;
    }

    printf("Résultat : %d\n", result);
    return 0;
}
