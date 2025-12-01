#include <stdio.h>
#include <string.h>
#include "fichier.h"

int main() {
    int choix;
    char nom_de_fichier[100];
    char message[500];

    while (1) {
        printf("\nQue souhaitez-vous faire ?\n");
        printf("1. Lire un fichier\n");
        printf("2. Écrire dans un fichier\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar(); // Consomme le retour à la ligne

        switch (choix) {
            case 1:
                printf("Entrez le nom du fichier à lire : ");
                fgets(nom_de_fichier, sizeof(nom_de_fichier), stdin);
                nom_de_fichier[strcspn(nom_de_fichier, "\n")] = '\0'; // Retirer le '\n'
                lire_fichier(nom_de_fichier);
                break;

            case 2:
                printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
                fgets(nom_de_fichier, sizeof(nom_de_fichier), stdin);
                nom_de_fichier[strcspn(nom_de_fichier, "\n")] = '\0';

                printf("Entrez le message à écrire : ");
                fgets(message, sizeof(message), stdin);
                message[strcspn(message, "\n")] = '\0';

                ecrire_dans_fichier(nom_de_fichier, message);
                break;

            case 3:
                printf("Au revoir !\n");
                return 0;

            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    }

    return 0;
}
