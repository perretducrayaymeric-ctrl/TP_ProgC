#include <stdio.h>

#define N_PHRASES 10
#define MAX_LONGUEUR 200

// Fonction pour comparer deux chaînes de caractères
// Retourne 1 si elles sont identiques, 0 sinon
int comparer_chaine(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0; // Différence trouvée
        }
        i++;
    }
    // Vérifier que les deux chaînes se terminent en même temps
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 1; // Chaînes identiques
    } else {
        return 0; // Longueurs différentes
    }
}

int main() {
    char *phrases[N_PHRASES] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char phrase_a_chercher[MAX_LONGUEUR];

    // Demander à l'utilisateur d'entrer la phrase
    printf("Entrez la phrase à rechercher :\n");
    fgets(phrase_a_chercher, MAX_LONGUEUR, stdin);

    // Supprimer le saut de ligne si présent
    int i = 0;
    while (phrase_a_chercher[i] != '\0') {
        if (phrase_a_chercher[i] == '\n') {
            phrase_a_chercher[i] = '\0';
            break;
        }
        i++;
    }

    // Rechercher la phrase
    int trouve = 0;
    for (i = 0; i < N_PHRASES; i++) {
        if (comparer_chaine(phrases[i], phrase_a_chercher)) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}
