#include <stdio.h>
#include <string.h>

#define MAX 100 

char titles[MAX][20];
char authors[MAX][20];
float prices[MAX];
int quantities[MAX];
int book_number = 0;

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
            if (book_number >= MAX) {
                printf("Bibliothèque pleine, impossible d'ajouter un nouveau livre.\n");
                continue; 
            }

            printf("Entrer le titre du livre: ");
            scanf("%s", titles[book_number]);

            printf("Entrer l'auteur du livre: ");
            scanf("%s", authors[book_number]);

            printf("Entrer le prix du livre: ");
            scanf("%f", &prices[book_number]);

            printf("Entrer la quantité du livre: ");
            scanf("%d", &quantities[book_number]);

            book_number++;
            printf("Livre ajouté avec succès.\n"); 
        } 
        else if (n == 2) {
            if (book_number == 0) {
                printf("Aucun livre dans la bibliothèque.\n");
                continue; // Skip to the next iteration
            }

            printf("Liste des livres:\n");
            for (int i = 0; i < book_number; i++) {
                printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n",
                    titles[i], authors[i], prices[i], quantities[i]);
            }
        } 
        else if (n == 3) {
            char titre[20];
            printf("Entrer le titre du livre à rechercher: ");
            scanf("%s", titre);

            for (int i = 0; i < book_number; i++) {
                if (strcmp(titles[i], titre) == 0) {
                    printf("Livre trouvé!\n");
                    printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n",
                        titles[i], authors[i], prices[i], quantities[i]);
                    break; 
                }
            }
            printf("Livre non trouvé.\n");
        } 
        else if (n == 4) {
            char titre[20];
            printf("Entrer le titre du livre à mettre à jour: ");
            scanf("%s", titre);

            for (int i = 0; i < book_number; i++) {
                if (strcmp(titles[i], titre) == 0) {
                    printf("Livre trouvé! Entrez les nouvelles informations.\n");
                    
                    printf("Entrer le nouveau titre du livre: ");
                    scanf("%s", titles[i]);
                    
                    printf("Entrer le nouvel auteur du livre: ");
                    scanf("%s", authors[i]);
                    
                    printf("Entrer le nouveau prix du livre: ");
                    scanf("%f", &prices[i]);
                    
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

            for (int i = 0; i < book_number; i++) {
                if (strcmp(titles[i], titre) == 0) {
                    for (int j = i; j < book_number - 1; j++) {
                        strcpy(titles[j], titles[j + 1]);
                        strcpy(authors[j], authors[j + 1]);
                        prices[j] = prices[j + 1];
                        quantities[j] = quantities[j + 1];
                    }
                    book_number--;
                    printf("Livre supprimé avec succès.\n");
                    break; 
                }
            }
            printf("Livre non trouvé pour la suppression.\n");
        } 
        else if (n == 6) {
            printf("Le nombre TOTAL des livres est: [%d]\n", book_number);
        } 
        else {
            printf("Option invalide, veuillez réessayer.\n");
        }
    }

    return 0;
}
