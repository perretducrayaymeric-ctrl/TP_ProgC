#ifndef LISTE_H
#define LISTE_H

#include <stdint.h>

// Structure pour une couleur RGBA
struct couleur {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

// Noeud de la liste chaînée
struct noeud_couleur {
    struct couleur c;
    struct noeud_couleur *suivant;
};

// Liste de couleurs
struct liste_couleurs {
    struct noeud_couleur *tete;
};

// Prototypes des fonctions
void init_liste(struct liste_couleurs *liste);
void insertion(struct couleur *c, struct liste_couleurs *liste);
void parcours(struct liste_couleurs *liste);

#endif
