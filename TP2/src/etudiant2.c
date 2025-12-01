#include <stdio.h>
#include <string.h>

// Définition de la structure pour un étudiant
struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note_prog; // Note en Programmation en C
    float note_sys;  // Note en Système d'exploitation
};

int main() {
    // Création d'un tableau de 5 étudiants
    struct Etudiant etudiants[5];

    // Initialisation des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Nguyen");
    strcpy(etudiants[2].prenom, "Chloe");
    strcpy(etudiants[2].adresse, "15, Rue des Lilas, Paris");
    etudiants[2].note_prog = 18.0;
    etudiants[2].note_sys = 17.5;

    strcpy(etudiants[3].nom, "Kouassi");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "7, Avenue de la République, Lille");
    etudiants[3].note_prog = 14.5;
    etudiants[3].note_sys = 13.0;

    strcpy(etudiants[4].nom, "Lopez");
    strcpy(etudiants[4].prenom, "Elena");
    strcpy(etudiants[4].adresse, "3, Rue Victor Hugo, Toulouse");
    etudiants[4].note_prog = 16.0;
    etudiants[4].note_sys = 15.5;

    // Affichage des informations de chaque étudiant
    for(int i = 0; i < 5; i++) {
        printf("Etudiant.e %d:\n", i+1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation en C : %.2f\n", etudiants[i].note_prog);
        printf("Note Systeme d'exploitation : %.2f\n", etudiants[i].note_sys);
        printf("-------------------------\n");
    }

    return 0;
}
