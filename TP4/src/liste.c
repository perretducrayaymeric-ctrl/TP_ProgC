#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

// Initialiser la liste
void init_liste(struct liste_couleurs *liste) {
    liste->tete = NULL;
}

// Insérer une couleur dans la liste (en tête)
void insertion(struct couleur *c, struct liste_couleurs *liste) {
    struct noeud_couleur *nouveau = (struct noeud_couleur *)malloc(sizeof(struct noeud_couleur));
    if (nouveau == NULL) {
        printf("Erreur : allocation mémoire impossible.\n");
        return;
    }
    nouveau->c = *c;
    nouveau->suivant = liste->tete;
    liste->tete = nouveau;
}

// Parcourir et afficher toutes les couleurs
void parcours(struct liste_couleurs *liste) {
    struct noeud_couleur *courant = liste->tete;
    int index = 1;
    while (courant != NULL) {
        printf("Couleur %d : R=%u, G=%u, B=%u, A=%u\n",
               index, courant->c.r, courant->c.g, courant->c.b, courant->c.a);
        courant = courant->suivant;
        index++;
    }
}
