#include <stdio.h>
#include "operator.h"

int main() {
    int num1, num2, result;
    char op;

    // Entrée utilisateur
    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // espace avant %c pour consommer le retour à la ligne

    // Calcul en fonction de l'opérateur
    switch(op) {
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

    // Affichage du résultat
    printf("Résultat : %d\n", result);

    return 0;
}

