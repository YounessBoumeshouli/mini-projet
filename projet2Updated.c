#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX  100
struct contactes{
    char nom[20];
    char prenom[20];
    char email[20];
    char numero[20];
   
};
    struct contactes contact[MAX];
    int contact_numero=0;
    int choix = 0;

void ajouter();
void afficher();
void chercher();
void modifier();
void supprimer();
void total();
int main(){
        
while(1){
    printf("Si vous pouvez ajouter un contact entrez 1\n");
printf("Si vous pouvez afficher  des contactes dans le list des contacts entrez 2\n");
printf("Si vous pouvez chercher un contact dans le list des contacts entrez 3\n");
printf("Si vous pouvez modifier les informaions de contact entrez 4\n");
printf("Si vous pouvez supprimer un contact entrez 5 \n");
printf("Si vous pouvez afficher le total des contactes entrez 6\n");
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
    printf("le nom de nouveau contact :\n");
    scanf("%s",contact[contact_numero].nom);
    printf("le prenom de nouveau contact :\n");
    scanf("%s",contact[contact_numero].prenom);
    printf("le email de nouveau contact :\n");
    scanf("%s",contact[contact_numero].email);
    printf("le numero de nouveau contact :\n");
    scanf("%s",&contact[contact_numero].numero);
 
    contact_numero++;
    printf("le  nouveau con tact a eté ajouté :\n");
    printf("\n/////////////////\n");
    printf("continuer?  1 pour oui 0 pour non\n");
    int s;
    scanf("%d",&s);
    if (s == 1)
    {
        ajouter();
    }
    else if (s == 0)
    {
        return;
    }
    
    
    return;
}
void chercher(){
    char nom_chercher[20];
    char prenom_chercher[20];
    printf("cherche par le nom de contact tapez :1 \n cherche par le prenom de contact tapez :2  ");
    int s;
    scanf("%d",&s);
    if (s == 1)
    {
        printf("\n entrez le nom :");
        scanf("%s",&nom_chercher);
      for (int i = 0; i<contact_numero; i++)
    {
       if (strcmp(contact[i].nom, nom_chercher) == 0) 
       {
        printf("le nom de contact:%s\n",contact[i].nom);
        printf("le prenomm de contact:%s\n",contact[i].prenom);
        printf("l'email de contact: %s\n",contact[i].email);
        printf("le numero de contact : %d\n",contact[i].numero);
       
        return;
       }
       
    }
    }else if (s == 2)
    {
        printf("\n entrez le prenom :");
        scanf("%s",&prenom_chercher);
        for (int i = 0; i<contact_numero; i++)
    {
       if (strcmp(contact[i].prenom, prenom_chercher) == 0) 
       {
        printf("le nom de contact:%s\n",contact[i].nom);
        printf("le prenom de contact:%s\n",contact[i].prenom);
        printf("l'email de contact: %s\n",contact[i].email);
        printf("le numero de contact : %d\n",contact[i].numero);
       
        return;
       }
       
    }
    }
    
    

    
}
void afficher(){
    int s;
   printf("\n1 pour simple 2 pour trie ASC 2 pour trie DESC\n");
   scanf("%d",&s);
    if (s ==  1)
    {
        for (int i = 0; i < contact_numero; i++)
    {
         printf(" contact numero:%d\n",i+1);
       printf("le nom de contact:%s\n",contact[i].nom);
        printf("l'email de contact: %s\n",contact[i].email);
        printf("le numero de contact : %s\n",contact[i].numero);
     
       printf("//////////////////\n");
       
    }

    }else if (s == 2)
    {
        for (int i = 0; i < contact_numero-1; i++)
        {
          for (int j = 1; j < contact_numero; j++)
          {
           if (strcmp(contact[j].nom,contact[j-1].nom)>0)
           {
          struct contactes cmp;
          cmp = contact[j];
          contact[j] = contact[j-1];
          contact[j-1] = cmp;
           }
           
          }
          
        }
           for (int i = 0; i < contact_numero; i++)
    {
         printf(" contact numero:%d\n",i+1);
       printf("le nom de contact:%s\n",contact[i].nom);
        printf("l'email de contact: %s\n",contact[i].email);
        printf("le numero de contact : %s\n",contact[i].numero);
     
       printf("//////////////////\n");
       
    }
    }
    else if (s == 3)
    {
        for (int i = 0; i < contact_numero-1; i++)
        {
          for (int j = 1; j < contact_numero; j++)
          {
           if (strcmp(contact[j].nom,contact[j-1].nom)<0)
           {
          struct contactes cmp;
          cmp = contact[j];
          contact[j] = contact[j-1];
          contact[j-1] = cmp;
           }
           
          }
          
        }
           for (int i = 0; i < contact_numero; i++)
    {
         printf(" contact numero:%d\n",i+1);
       printf("le nom de contact:%s\n",contact[i].nom);
        printf("l'email de contact: %s\n",contact[i].email);
        printf("le numero de contact : %s\n",contact[i].numero);
     
       printf("//////////////////\n");
       
    }
    }
    
    
   
}
void modifier(){
    char nom_recherchable[20];
    printf("entrer le nom de contact qui vous modifier:");
    scanf("%s",&nom_recherchable);
    for (int i = 0; i < contact_numero; i++)
    {
       if (strcmp(contact[i].nom,nom_recherchable) == 0) 
       {
        char nouveau_numero[20];
        char nouveau_email[20];
        printf("le nouveau numero de contact:");
        scanf("%s",&nouveau_numero);
       
        strcpy(contact[i].numero , nouveau_numero);
        printf("le nouveau email de contact:");
        scanf("%s",&nouveau_email);
       
        strcpy(contact[i].email , nouveau_email);
        return;

       }else{
        printf("le contact est non trouvable");
        return;
       }
       
    }
}
void supprimer(){
    char nom_supprimer[20];
    printf("entrer le nom de contact qui vous supprimer:");
    scanf("%s",&nom_supprimer);
    for (int i = 0; i < MAX; i++)
    {
       if (strcmp(contact[i].nom, nom_supprimer) == 0) 
       {
        for (int j = i; j < MAX-1; j++)
        {
            
             contact[j] = contact[j+1];
        }
        
        return;

       }
       
    }
}
void total(){
   
    printf("le nombre des contactes est :%d  contactes \n",contact_numero);
    
}