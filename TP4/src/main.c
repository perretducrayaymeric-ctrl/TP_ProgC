int main() {
    Etudiant etudiants[NOMBRE_ETUDIANTS];
    char nom_fichier[] = "etudiant.txt";

    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        printf("\nEntrez les détails de l'étudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %[^\n]", etudiants[i].nom);

        printf("Prénom : ");
        scanf(" %[^\n]", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);

        printf("Note 1 : ");
        scanf("%d", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%d", &etudiants[i].note2);
    }

    sauvegarder_etudiants(nom_fichier, etudiants, NOMBRE_ETUDIANTS);

    printf("\nLes détails des étudiants ont été enregistrés dans le fichier %s.\n", nom_fichier);

    return 0;
}
