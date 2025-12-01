#include <stdio.h>

int main() {
    // Tableaux pour les noms, prénoms et adresses
    char noms[5][20] = {"Dupont", "Martin", "Nguyen", "Kouassi", "Lopez"};
    char prenoms[5][20] = {"Alice", "Bob", "Chloe", "David", "Elena"};
    char adresses[5][50] = {
        "10 rue A, Paris",
        "25 avenue B, Lyon",
        "12 rue C, Marseille",
        "7 boulevard D, Lille",
        "3 rue E, Toulouse"
    };

    // Tableaux pour les notes
    float notes_prog[5] = {15.5, 12.0, 18.0, 14.5, 16.0};
    float notes_sys[5] = {14.0, 11.5, 17.0, 13.0, 15.5};

    // Parcours des étudiants et affichage des informations
    for(int i = 0; i < 5; i++) {
        printf("Etudiant %d:\n", i+1);
        printf("Nom: %s\n", noms[i]);
        printf("Prenom: %s\n", prenoms[i]);
        printf("Adresse: %s\n", adresses[i]);
        printf("Note Programmation en C: %.2f\n", notes_prog[i]);
        printf("Note Systeme d'exploitation: %.2f\n", notes_sys[i]);
        printf("-------------------------\n");
    }

    return 0;
}
