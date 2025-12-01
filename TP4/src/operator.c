#include "operator.h"
#include <stdio.h>

int somme(int num1, int num2) {
    return num1 + num2;
}

int difference(int num1, int num2) {
    return num1 - num2;
}

int produit(int num1, int num2) {
    return num1 * num2;
}

int quotient(int num1, int num2) {
    if (num2 != 0)
        return num1 / num2;
    else {
        printf("Erreur : division par zéro\n");
        return 0;
    }
}

int modulo(int num1, int num2) {
    if (num2 != 0)
        return num1 % num2;
    else {
        printf("Erreur : modulo par zéro\n");
        return 0;
    }
}

int et_bitwise(int num1, int num2) {
    return num1 & num2;
}

int ou_bitwise(int num1, int num2) {
    return num1 | num2;
}

int negation(int num1) {
    return ~num1;
}
