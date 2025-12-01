#include <stdio.h>
#include <string.h>
#include "fichier.h"

#define NOMBRE_ETUDIANTS 5

typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    int note1;
    int note2;
} Etudiant;
