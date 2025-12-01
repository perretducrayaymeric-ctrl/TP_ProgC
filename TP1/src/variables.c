#include <stdio.h>

int main() {

    /* Types char */
    char c = 'A';
    signed char sc = -50;
    unsigned char uc = 200;

    /* Types short */
    short s = -12345;
    signed short ss = -23456;
    unsigned short us = 50000;

    /* Types int */
    int i = -123456789;
    signed int si = -987654321;
    unsigned int ui = 3000000000U;

    /* Types long int */
    long li = -1234567890L;
    signed long sli = -987654321L;
    unsigned long uli = 3000000000UL;

    /* Types long long int */
    long long lli = -123456789012345LL;
    signed long long slli = -99999999999999LL;
    unsigned long long ulli = 123456789012345ULL;

    /* Types réels */
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.234567890123456789L;

    /* Affichage */
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("short : %hd\n", s);
    printf("signed short : %hd\n", ss);
    printf("unsigned short : %hu\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
