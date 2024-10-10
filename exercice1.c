#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fichier;
    char ligne[100];  

    fichier = fopen("exercice1.txt", "r");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return 1;
    }

    printf("Contenu du fichier exercice1.txt :\n");
    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        printf("%s", ligne);
    }

    fclose(fichier);
    return 0;
}
