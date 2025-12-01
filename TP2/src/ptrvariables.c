#include <stdio.h>
#include <stdint.h>

int main() {
    // Déclaration des variables
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x123456789ABCDEF0;
    long long int lli = 0x123456789ABCDEF0;
    float f = 3.0f;
    double d = 5.0;
    long double ld = 7.0;

    // Déclaration des pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Affichage avant manipulation
    printf("Avant manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)*pi);
    printf("Adresse de li : %p, Valeur de li : %016lx\n", (void*)pli, (unsigned long)*pli);
    printf("Adresse de lli : %p, Valeur de lli : %016llx\n", (void*)plli, (unsigned long long)*plli);

    // Pour les flottants, on doit utiliser un pointeur vers entier pour afficher la représentation binaire
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    // long double varie selon la plateforme, affichons byte par byte
    unsigned char *pbytes = (unsigned char*)pld;
    for(int j = sizeof(ld)-1; j >= 0; j--) {
        printf("%02x", pbytes[j]);
    }
    printf("\n");

    // Manipulation des variables via les pointeurs
    *pc = 0x34;
    *ps = 0x5678;
    *pi = 0x87654321;
    *pli = 0x0FEDCBA987654321;
    *plli = 0x0FEDCBA987654321;
    *pf = 1.0f;
    *pd = 2.0;
    *pld = 3.0;

    // Affichage après manipulation
    printf("\nAprès manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)*pi);
    printf("Adresse de li : %p, Valeur de li : %016lx\n", (void*)pli, (unsigned long)*pli);
    printf("Adresse de lli : %p, Valeur de lli : %016llx\n", (void*)plli, (unsigned long long)*plli);
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    for(int j = sizeof(ld)-1; j >= 0; j--) {
        printf("%02x", pbytes[j]);
    }
    printf("\n");

    return 0;
}
