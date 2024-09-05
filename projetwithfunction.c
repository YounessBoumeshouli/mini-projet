#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX  100
struct livres{
    char titre[20];
    char auteur[20];
    int prix;
    int stock;
};
    struct livres livre[MAX];
    int livre_numero;
int choix = 0;

void ajouter();
void afficher();
void chercher();
void modifier();
void supprimer();
void total();
int main(){
        
while(1){
    printf("Si vous pouvez ajouter livre entrez 1\n");
printf("Si vous pouvez afficher  des livres dans le stock entrez 2\n");
printf("Si vous pouvez chercher un livre dans le stock entrez 3\n");
printf("Si vous pouvez modifier les informaions de livre entrez 4\n");
printf("Si vous pouvez supprimer un livre entrez 5 \n");
printf("Si vous pouvez afficher le total des livres entrez 6\n");
scanf("%d",&choix);
switch (choix)
{
case 1:
    ajouter();
    break;
case 2:
    afficher();
    break;
case 3:
    chercher();
    break;
case 4:
    modifier();
    break;
case 5:
    supprimer();
    break;
case 6:
    total();
    break;
default:
    break;
}
}

}

void ajouter(){
    printf("le titre de nouveau livre :\n");
    scanf("%s",livre[livre_numero].titre);
    printf("le auteur de nouveau livre :\n");
    scanf("%s",livre[livre_numero].auteur);
    printf("le prix de nouveau livre :\n");
    scanf("%d",&livre[livre_numero].prix);
    printf("la quantite de nouveau livre :\n");
    scanf("%d",&livre[livre_numero].stock);
    livre_numero++;
    printf("le livre de nouveau livre :\n");
    return;
}
void chercher(){
    char titre_chercher[20];
    printf("entrer le titre de livre");
    scanf("%s",&titre_chercher);
    for (int i = 0; i < MAX; i++)
    {
       if (strcmp(livre[i].titre, titre_chercher) == 0) 
       {
        printf("le titre de livre:%s\n",livre[i].titre);
        printf("l'auteur de livre: %s\n",livre[i].auteur);
        printf("le prix de livre : %d\n",livre[i].prix);
        printf("le nombre des livres : %d\n",livre[i].stock);
        return;
       }
       
    }
    
}
void afficher(){
    char titre_afficher[20];
    
    for (int i = 0; i < livre_numero; i++)
    {
         printf(" livre numero:%d\n",i);
       printf("le titre de livre:%s\n",livre[i].titre);
        printf("l'auteur de livre: %s\n",livre[i].auteur);
        printf("le prix de livre : %d\n",livre[i].prix);
        printf("le nombre des livres : %d\n",livre[i].stock);
       printf("//////////////////\n");
    }
}
void modifier(){
    char titre_modifier[20];
    printf("entrer le titre de livre qui vous modifier:");
    scanf("%s",&titre_modifier);
    for (int i = 0; i < MAX; i++)
    {
       if (strcmp(livre[i].titre, titre_modifier) == 0) 
       {
        
       
        int nouveau_stock;
       
        printf("le nouveau stock de livre:");
        scanf("%d",nouveau_stock);
       
        livre[i].stock = nouveau_stock;

        return;

       }else{
        printf("le livre est non available");
        return;
       }
       
    }
}
void supprimer(){
    char titre_supprimer[20];
    printf("entrer le titre de livre qui vous supprimer:");
    scanf("%s",&titre_supprimer);
    for (int i = 0; i < MAX; i++)
    {
       if (strcmp(livre[i].titre, titre_supprimer) == 0) 
       {
        for (int j = i; j < MAX-1; j++)
        {
            
             livre[j] = livre[j+1];
        }
        
        return;

       }
       
    }
}
void total(){
   
    printf("le nombre des livres est :%d  livres \n",livre_numero);
    
}