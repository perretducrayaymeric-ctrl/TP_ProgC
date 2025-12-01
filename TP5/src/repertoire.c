#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>

#define MAX_PATH 1024
#define MAX_STACK 1024

void lire_dossier(const char *nom_repertoire) {
    DIR *dir = opendir(nom_repertoire);
    if (!dir) {
        perror("Erreur ouverture répertoire");
        return;
    }

    struct dirent *entree;
    printf("Contenu du répertoire '%s':\n", nom_repertoire);

    while ((entree = readdir(dir)) != NULL) {
        printf("%s\n", entree->d_name);
    }

    closedir(dir);
}

void lire_dossier_recursif(const char *nom_repertoire) {
    DIR *dir = opendir(nom_repertoire);
    if (!dir) {
        perror("Erreur ouverture répertoire");
        return;
    }

    struct dirent *entree;
    while ((entree = readdir(dir)) != NULL) {
        if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0)
            continue;

        char chemin_complet[MAX_PATH];
        snprintf(chemin_complet, sizeof(chemin_complet), "%s/%s", nom_repertoire, entree->d_name);
        printf("%s\n", chemin_complet);

        struct stat st;
        if (stat(chemin_complet, &st) == 0 && S_ISDIR(st.st_mode)) {
            lire_dossier_recursif(chemin_complet);
        }
    }

    closedir(dir);
}

// Fonction itérative pour parcourir un répertoire et ses sous-répertoires
void lire_dossier_iteratif(const char *nom_repertoire) {
    char *stack[MAX_STACK];
    int top = -1;

    // Empiler le répertoire de départ
    stack[++top] = strdup(nom_repertoire);

    while (top >= 0) {
        char *current = stack[top--];  // dépiler le répertoire courant
        DIR *dir = opendir(current);
        if (!dir) {
            perror("Erreur ouverture répertoire");
            free(current);
            continue;
        }

        struct dirent *entree;
        while ((entree = readdir(dir)) != NULL) {
            if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0)
                continue;

            char chemin_complet[MAX_PATH];
            snprintf(chemin_complet, sizeof(chemin_complet), "%s/%s", current, entree->d_name);
            printf("%s\n", chemin_complet);

            struct stat st;
            if (stat(chemin_complet, &st) == 0 && S_ISDIR(st.st_mode)) {
                if (top + 1 < MAX_STACK) {
                    stack[++top] = strdup(chemin_complet);  // empiler le sous-répertoire
                } else {
                    fprintf(stderr, "Pile pleine, impossible d'empiler %s\n", chemin_complet);
                }
            }
        }

        closedir(dir);
        free(current);
    }
}
