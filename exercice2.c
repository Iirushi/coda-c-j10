#include <stdio.h>

int main() {
    FILE *fichier;
    
    // Ouvrir le fichier en mode écriture ("w" pour write)
    fichier = fopen("exercice2.txt", "w");
    
    // Vérifier si le fichier a été ouvert avec succès
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return 1;
    }
    
    // Écrire les nouvelles lignes dans le fichier
    fprintf(fichier, "Frêre Jacques, frêre Jacques\n");
    fprintf(fichier, "Dormez-vous, dormez-vous ?\n");
    
    // Fermer le fichier
    fclose(fichier);
    
    printf("Le contenu du fichier exercice2.txt a été modifié avec succès.\n");
    
    return 0;
}