#include <stdio.h>
#include <string.h>

#define MAX 100 

char titres[MAX][20];
char auteurs[MAX][20];
float prix[MAX];
int quantities[MAX];
int numbres_livres = 0;

int main() {
    int n;

    while (1) {
        printf("Si vous voulez ajouter un livre, entrez [1]\n");
        printf("Si vous voulez afficher les livres, entrez [2]\n");
        printf("Si vous voulez rechercher un livre, entrez [3]\n");
        printf("Si vous voulez mettre à jour un livre, entrez [4]\n");
        printf("Si vous voulez supprimer un livre, entrez [5]\n");
        printf("Si vous voulez voir le nombre des livres, entrez [6]\n");
        printf("Pour quitter, entrez [0]\n");
        
        scanf("%d", &n);
        
        if (n == 0) {
            printf("Au revoir!\n");
            break; 
        }

        if (n == 1) {
            if (numbres_livres >= MAX) {
                printf("Bibliothèque pleine, impossible d'ajouter un nouveau livre.\n");
            }

            printf("Entrer le titre du livre: ");
            scanf("%s", titres[numbres_livres]);

            printf("Entrer l'auteur du livre: ");
            scanf("%s", auteurs[numbres_livres]);

            printf("Entrer le prix du livre: ");
            scanf("%f", &prix[numbres_livres]);

            printf("Entrer la quantité du livre: ");
            scanf("%d", &quantities[numbres_livres]);

            numbres_livres++;
            printf("Livre ajouté avec succès.\n"); 
        } 
        else if (n == 2) {
            if (numbres_livres == 0) {
                printf("Aucun livre dans la bibliothèque.\n");
                continue; 
            }

            printf("Liste des livres:\n");
            for (int i = 0; i < numbres_livres; i++) {
                printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n",
                    titres[i], auteurs[i], prix[i], quantities[i]);
            }
        } 
        else if (n == 3) {
            char titre[20];
            printf("Entrer le titre du livre à rechercher: ");
            scanf("%s", titre);

            for (int i = 0; i < numbres_livres; i++) {
                if (strcmp(titres[i], titre) == 0) {
                    printf("Livre trouvé!\n");
                    printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n",
                        titres[i], auteurs[i], prix[i], quantities[i]);
                    break; 
                }
            }
            printf("Livre non trouvé.\n");
        } 
        else if (n == 4) {
            char titre[20];
            printf("Entrer le titre du livre à mettre à jour: ");
            scanf("%s", titre);

            for (int i = 0; i < numbres_livres; i++) {
                if (strcmp(titres[i], titre) == 0) {
                    printf("Livre trouvé! Entrez les nouvelles informations.\n");
                    
                    printf("Entrer le nouveau titre du livre: ");
                    scanf("%s", titres[i]);
                    
                    printf("Entrer le nouvel auteur du livre: ");
                    scanf("%s", auteurs[i]);
                    
                    printf("Entrer le nouveau prix du livre: ");
                    scanf("%f", &prix[i]);
                    
                    printf("Entrer la nouvelle quantité du livre: ");
                    scanf("%d", &quantities[i]);

                    printf("Livre mis à jour avec succès.\n");
                    break; 
                }
            }
            printf("Livre non trouvé pour la mise à jour.\n");
        } 
        else if (n == 5) {
            char titre[20];
            printf("Entrer le titre du livre à supprimer: ");
            scanf("%s", titre);

            for (int i = 0; i < numbres_livres; i++) {
                if (strcmp(titres[i], titre) == 0) {
                    for (int j = i; j < numbres_livres - 1; j++) {
                        strcpy(titres[j], titres[j + 1]);
                        strcpy(auteurs[j], auteurs[j + 1]);
                        prix[j] = prix[j + 1];
                        quantities[j] = quantities[j + 1];
                    }
                    numbres_livres--;
                    printf("Livre supprimé avec succès.\n");
                    break; 
                }
            }
            printf("Livre non trouvé pour la suppression.\n");
        } 
        else if (n == 6) {
            printf("Le nombre TOTAL des livres est: [%d]\n", numbres_livres);
        } 
        else {
            printf("Option invalide, veuillez réessayer.\n");
        }
    }

    return 0;
}
