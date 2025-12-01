#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>  // pour opendir, readdir, closedir
#include <errno.h>   // pour errno

void lire_dossier(const char *nom_repertoire) {
    DIR *dir = opendir(nom_repertoire);  // ouverture du répertoire
    if (dir == NULL) {
        perror("Erreur lors de l'ouverture du répertoire");
        return;
    }

    struct dirent *entree;  // structure pour stocker les entrées du répertoire
    printf("Contenu du répertoire '%s':\n", nom_repertoire);

    while ((entree = readdir(dir)) != NULL) {
        printf("%s\n", entree->d_name);  // affichage du nom du fichier ou répertoire
    }

    closedir(dir);  // fermeture du répertoire
}
