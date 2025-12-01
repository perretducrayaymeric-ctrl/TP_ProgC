#include <stdio.h>
#include <string.h>

#define MAX_LIGNE 1000

int compter_occurrences(const char *ligne, const char *phrase) {
    int count = 0;
    const char *ptr = ligne;

    while ((ptr = strstr(ptr, phrase)) != NULL) {
        count++;
        ptr += strlen(phrase); // avancer après l'occurrence trouvée
    }

    return count;
}

int main() {
    char nom_fichier[100];
    char phrase[200];
    char ligne[MAX_LIGNE];
    FILE *f;
    int numero_ligne = 0;

    // Demande du nom du fichier
    printf("Entrez le nom du fichier : ");
    scanf("%s", nom_fichier);

    f = fopen(nom_fichier, "r");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return 1;
    }

    // Demande de la phrase à rechercher
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    getchar(); // consommer le retour à la ligne résiduel
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = '\0'; // retirer le '\n'

    printf("\nRésultats de la recherche :\n");

    // Parcours du fichier ligne par ligne
    while (fgets(ligne, sizeof(ligne), f) != NULL) {
        numero_ligne++;
        int nb_occurrences = compter_occurrences(ligne, phrase);
        if (nb_occurrences > 0) {
            printf("Ligne %d, %d fois\n", numero_ligne, nb_occurrences);
        }
    }

    fclose(f);
    return 0;
}
