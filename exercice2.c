#include <stdio.h>

int main() {
    FILE *fichier;
    
    
    fichier = fopen("exercice2.txt", "w");
    
 
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return 1;
    }
    
  
    fprintf(fichier, "Frêre Jacques, frêre Jacques\n");
    fprintf(fichier, "Dormez-vous, dormez-vous ?\n");
    
    
    fclose(fichier);
    
    printf("Le contenu du fichier exercice2.txt a été modifié avec succès.\n");
    
    return 0;
}
