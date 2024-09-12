//Challenge 1 : Affichage d'une Chaîne

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//exercice 1
// struct personne
// {
// char nom[20];
// char prenom[20];
// int age;

// };
// struct personne p1 ;
// int i = 0;
// int main(){
    
//     char prenom[20];
//     char nom[20] ;
//     int age;
//     printf("entrez les infos de perssone:\n");
//     printf("le nom de perssone:");
//     scanf("%s",nom);
//     printf("le prenom de perssone:");
//     scanf("%s",prenom);
//     printf("le age de perssone:");
//     scanf("%d",&age);
    
//     strcpy(p1.nom,nom);
//     strcpy(p1.prenom,prenom);
//     p1.age=age;
//     printf("le nom de perssone :%s\nle prenom est :%s\n l'age:%d",p1.nom,p1.prenom,p1.age);
    
// }

// exercice 2
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int stop = 0;
// typedef struct  {
//     char nom[20];
//     char prenom[20];
//     int notes[4];
// } etudiant;

// int main() {
//     int size = 3;


// int j = 0;
    
    
//   while(j < 3){
    
    
    
    
//     etudiant e1[3];
    
//     printf("Entrez les infos de la personne:\n");
//     printf("Le nom de la personne: ");
//     scanf("%s", e1[j].nom);
//     printf("Le prénom de la personne: ");
//     scanf("%s", e1[j].prenom);
    
//     for (int i = 0; i < 4; i++) {
//         printf("La note numéro %d: ", i + 1);
//         scanf("%d", &e1[j].notes[i]);
//     }

//     printf("\nLe nom de l'étudiant : %s\n", e1[j].nom);
//     printf("Le prénom de l'étudiant : %s\n", e1[j].prenom);
    
//     for (int i = 0; i < 4; i++) {
//         printf("La note numéro %d : %d\n", i + 1, e1[j].notes[i]);
//     }
 
//     j++;
   
    
    
// }
    
     

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// //exercice 3
// typedef struct 
// {
//    float lon;
//    float lar;
//    }rectangle;

//    float aire(rectangle rec){
//     float aire;
//     aire = rec.lon * rec.lar / 2;
//     return aire;
// }
// int main(){
// rectangle rec ;
// printf("tapez la longeur :");
// scanf("%f",&rec.lon);
// printf("tapez la largeur :");
// scanf("%f",&rec.lar);
// printf("l'aire est : ");
//  float x=  aire(rec);
//  printf("%.2f" , x);

// }
/// exercice 4

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// //exercice 3
// typedef struct 
// {
//    float x;
//    float y;
//    }points;
//    int main(){
//        points *p;
//        points p1;
       
//        p=&p1;
       
//        printf("taper x:");
//        scanf("%f",&p->x);
//        printf("taper y:");
//        scanf("%f",&p->y);
      
//       printf("%.2f",p->x);
//       printf("%.2f",p->y); 
       
       
       
// }
   /// exercice 5;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// typedef struct 
// {
//    char titre[10];
//    char auteur[10];
//    int annee;
//    }livres;
//    void afficher(livres livre);
//    void modifierDate(livres *livre);
//    int main(){
//        livres l1 = {"trisaur","kamal",2000};
//        modifierDate(&l1);
     
       
// }

// void modifierDate(livres *livre){
   
//     printf("le nouveau date :");
//    scanf("%d",&livre->annee);
//        printf("le titre : %s \n l'auteur : %s \n l'annee : %d",livre->titre,livre->auteur, livre->annee);
// }
   