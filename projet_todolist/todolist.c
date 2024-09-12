#include <stdio.h>
    #include <time.h>
#include<string.h>
    typedef struct 
    {
        int numero;
        char nametache[20];
        char description[20]; 

        int daydecration;
        int monthdecreation;
        int yeardecreation;

        int deadlineday;
        int deadlinemonth;
        int deadlineyear;

        char status[30];
    
    }taches;
    // typedef struct 
    // {
    //     char CIN[10];
    //     char nom[20];
    //     char prenom[20];

    // }employees;
    int k =  0 ;
    taches tache[100];
   void modifier(){
    int modifier;
        printf("si te veux modifier par l'identifiant tapez :1");
        printf("si te veux modifier par le nom de tahe tapez :2");
        scanf("%d",&modifier);
        switch (modifier)
        {
        case 1:
        int id_modifier;
    
        printf("id de tache qui te veux modifier:\n");
        scanf("%d",&id_modifier);
        printf("le nouveau desc:\n");
        scanf("%s",tache[id_modifier-1].description );   
        printf("le nouveau deadline year:\n");
        scanf("%d",&tache[id_modifier-1].deadlineyear );
        printf("le nouveau deadline month:\n");
        scanf("%d",&tache[id_modifier-1].deadlinemonth );
        printf("le nouveau deadline day:\n");
        scanf("%d",&tache[id_modifier-1].deadlineday );
       printf("modifier le status de tache :");
        printf("1 pour a realiser , 2 pour en cours , 3 terminer\n");
        int s;
        scanf("%d",&s);
        switch (s)
        {
        case 1:
        strcpy(tache[id_modifier-1].status,"a realiser");
            break;
        case 2:
        strcpy(tache[id_modifier-1].status,"en cours");
            break;
        case 3:
        strcpy(tache[id_modifier-1].status,"terminer");
            break;
        default:
            break;
        }

            
            break;
         case 2:
        printf("\n entrer le nom d tache qui te veux modifier");
        char tache_modifier[30];
        scanf("%s",tache_modifier);
        int id_tache;
        for (int i = 0; i < k; i++)
        {
           if (strcmp(tache_modifier,tache[i].nametache)==0)
           {
           id_tache = i;
           break;
           }
           
        }
       
        printf("le nouveau desc:\n");
        scanf("%s",tache[id_tache-1].description );   
        printf("le nouveau deadline year:\n");
        scanf("%d",&tache[id_tache-1].deadlineyear );
        printf("le nouveau deadline month:\n");
        scanf("%d",&tache[id_tache-1].deadlinemonth );
        printf("le nouveau deadline day:\n");
        scanf("%d",&tache[id_tache-1].deadlineday );
       printf("modifier le status de tache :");
        printf("1 pour a realiser , 2 pour en cours , 3 terminer\n");
        int choix;
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
        strcpy(tache[id_tache-1].status,"a realiser");
            break;
        case 2:
        strcpy(tache[id_tache-1].status,"en cours");
            break;
        case 3:
        strcpy(tache[id_tache-1].status,"terminer");
            break;
        default:
            break;
        }
        
               
            
        

        
         break;
        default:
            break;
        }
   }

    void supprimerTache(){
        int supprimer;
        printf("si te veux supprimer par l'identifiant tapez :1");
        printf("si te veux supprimer par le nom de tahe tapez :2");
        scanf("%d",&supprimer);
        switch (supprimer)
        {
        case 1:
        int id_supprimer;
        printf("id de tache qui te veux supprimer:");
        scanf("%d",&id_supprimer);
            for (int i = id_supprimer-1; i < k; i++)
            {
               tache[i] = tache[i+1];
               tache[i].numero--;
            }
            k--;
       

            
            break;
         case 2:
        printf("\n entrer le nom d tache qui te veux supprimer");
        char tache_supprimer[30];
        scanf("%s",tache_supprimer);
        int id_tache;
        for (int i = 0; i < k; i++)
        {
           if (strcmp(tache_supprimer,tache[i].nametache)==0)
           {
           id_tache = i;
           break;
           }
           
        }
        for (int i = id_tache; i < k; i++)
            {
               tache[i] = tache[i+1];
                 tache[i].numero--;
            }
            k--;

        
         break;
        default:
            break;
        }
    }
    void statistique(){
    
    printf("si te veux afficher tout les taches tapez 1 :\n");
    printf("si te veux afficher les taches completes tapez 2 :\n");
    printf("si te veux afficherles taches incompletes tapez 3 :\n");
    int choix;
    scanf("%d",&choix);
    switch (choix)
    {
    case 1:
        printf("le nombre des taches est : %d",k);
        break;
    case 3:
    int count = 0;
    for (int i = 0; i < k; i++)
        {
        if ((strcmp(tache[i].status,"a realiser")==0)||(strcmp(tache[i].status,"en cours")==0))
        {
         count++;
        }
        
        }
        printf("%d taches",count);
    break;
        case 2:
        count = 0;
    for (int i = 0; i < k; i++)
        {
        if (strcmp(tache[i].status,"terminer")==0)
        {
      count++;
        }
        
        }
        printf("%d taches\n",count);
        break;
    default:
        break;
    }
        
    }
    
    void ajouterTache(){
            time_t current_time = time(NULL);

        // Create a structure to hold the local time
        struct tm local_time = *localtime(&current_time);
        printf("local time is : %d - %d  - %d",local_time.tm_year,local_time.tm_mon,local_time.tm_wday);
        printf("le nom de tache :");
        scanf("%s",tache[k].nametache);
        printf("le desc de tache :");
        scanf("%s",tache[k].description);
        printf("le deadline Year de tache Y:");
        scanf("%d",&tache[k].deadlineyear);
        printf("le deadline month de tache Y:");
        scanf("%d",&tache[k].deadlinemonth);
        printf("le deadline day de tache Y:");
        scanf("%d",&tache[k].deadlineday);
        printf("le status de tache :");
        printf("1 pour a realiser , 2 pour en cours , 3 terminer\n");
        int s;
        scanf("%d",&s);
        switch (s)
        {
        case 1:
        strcpy(tache[k].status,"a realiser");
            break;
        case 2:
        strcpy(tache[k].status,"en cours");
            break;
        case 3:
        strcpy(tache[k].status,"terminer");
            break;
        default:
            break;
        }
        tache[k].yeardecreation = local_time.tm_year + 1900; // Years since 1900
        tache[k].monthdecreation = local_time.tm_mon + 1;    // Months since January (0-11, so add 1)
        tache[k].daydecration = local_time.tm_mday;         // Day of the month (1-31)
            // Hours since midnight (0-23)
    tache[k].numero = k+1;
    k++;

    }
    void afficherTache(){
    printf("si te veux afficher tout les taches tapez 1 :\n");
    printf("si te veux afficher les taches completes tapez 2 :\n");
    printf("si te veux afficherles taches incompletes tapez 3 :\n");
    int choix;
    scanf("%d",&choix);
    switch (choix)
    {
    case 1:
        for (int i = 0; i < k; i++)
        {
            printf("le numero de tache : %d\n",tache[i].numero);
            printf("le nom de tache : %s\n",tache[i].nametache);
            printf("le desc de tache : %s\n",tache[i].description);
            printf("la deadlineDay de tache : %d \n",tache[i].deadlineday);
            printf("la deadlinMonth de tache : %d \n",tache[i].deadlinemonth);
            printf("la deadlineYear de tache : %d \n",tache[i].deadlineyear);
            printf("/////////////////////////////////\n");
            printf("la day  de creation de tache : %d \n",tache[i].daydecration);
            printf("la monthde creation  de tache : %d\n ",tache[i].monthdecreation);
            printf("la  year de creation detache : %d \n",tache[i].yeardecreation);
            printf("le status detache : %s \n",tache[i].status);
        }
        break;
    case 3:
    for (int i = 0; i < k; i++)
        {
        if ((strcmp(tache[i].status,"a realiser")==0)||(strcmp(tache[i].status,"en cours")==0))
        {
            printf("le numero de tache : %d\n",tache[i].numero);
            printf("le nom de tache : %s\n",tache[i].nametache);
            printf("le desc de tache : %s\n",tache[i].description);
            printf("la deadlineDay de tache : %d \n",tache[i].deadlineday);
            printf("la deadlinMonth de tache : %d \n",tache[i].deadlinemonth);
            printf("la deadlineYear de tache : %d \n",tache[i].deadlineyear);
            printf("/////////////////////////////////\n");
            printf("la day  de creation de tache : %d \n",tache[i].daydecration);
            printf("la monthde creation  de tache : %d\n ",tache[i].monthdecreation);
            printf("la  year de creation detache : %d \n",tache[i].yeardecreation);
            printf("le status detache : %s \n",tache[i].status);
        }
        
        }
    break;
        case 2:
    for (int i = 0; i < k; i++)
        {
        if (strcmp(tache[i].status,"terminer")==0)
        {
            printf("le numero de tache : %d\n",tache[i].numero);
            printf("le nom de tache : %s\n",tache[i].nametache);
            printf("le desc de tache : %s\n",tache[i].description);
            printf("la deadlineDay de tache : %d \n",tache[i].deadlineday);
            printf("la deadlinMonth de tache : %d \n",tache[i].deadlinemonth);
            printf("la deadlineYear de tache : %d \n",tache[i].deadlineyear);
            printf("/////////////////////////////////\n");
            printf("la day  de creation de tache : %d \n",tache[i].daydecration);
            printf("la monthde creation  de tache : %d\n ",tache[i].monthdecreation);
            printf("la  year de creation detache : %d \n",tache[i].yeardecreation);
            printf("le status detache : %s \n",tache[i].status);
        }
        
        }
        break;
    default:
        break;
    }
        
    }


    void chercherTache(){
        int chercher;
        printf("si te veux chercher par l'identifiant tapez :1");
        printf("si te veux chercher par le nom de tahe tapez :2");
        scanf("%d",&chercher);
        if (chercher == 1)
        {
            int id_tache;
        printf("l'identifiant de tache qui tu veux chercher :");
        scanf("%d",&id_tache);
        printf("le numero de tache : %d\n",tache[id_tache-1].numero);
            printf("le nom de tache : %s\n",tache[id_tache-1].nametache);
            printf("le desc de tache : %s\n",tache[id_tache-1].description);
            printf("la deadlineDay de tache : %d \n",tache[id_tache-1].deadlineday);
            printf("la deadlinMonth de tache : %d \n",tache[id_tache-1].deadlinemonth);
            printf("la deadlineYear de tache : %d \n",tache[id_tache-1].deadlineyear);
            printf("/////////////////////////////////\n");
            printf("la day  de creation de tache : %d \n",tache[id_tache-1].daydecration);
            printf("la monthde creation  de tache : %d\n ",tache[id_tache-1].monthdecreation);
            printf("la  year de creation detache : %d \n",tache[id_tache-1].yeardecreation);
        
        }else if (chercher == 2)
        {
        
            char nom_tache[20];
        printf("le nom de tache qui tu veux chercher :");
        scanf("%s",nom_tache);
        for (int i = 0; i < k; i++)
        {
        if (strcmp(tache[i].nametache,nom_tache)==0)
        {
                    printf("le numero de tache : %d\n",tache[i].numero);
            printf("le nom de tache : %s\n",tache[i].nametache);
            printf("le desc de tache : %s\n",tache[i].description);
            printf("la deadlineDay de tache : %d \n",tache[i].deadlineday);
            printf("la deadlinMonth de tache : %d \n",tache[i].deadlinemonth);
            printf("la deadlineYear de tache : %d \n",tache[i].deadlineyear);
            printf("/////////////////////////////////\n");
            printf("la day  de creation de tache : %d \n",tache[i].daydecration);
            printf("la monthde creation  de tache : %d\n ",tache[i].monthdecreation);
            printf("la  year de creation detache : %d \n",tache[i].yeardecreation);
        }
        
        }
        
        }
        
        
    }
    int main(){
            
    while(1){
        int choix ;
        printf("Si vous pouvez ajouter un taches entrez 1\n");
    printf("Si vous pouvez afficher  des taches dans le list des taches entrez 2\n");
    printf("Si vous pouvez chercher  de tache dans le list des taches entrez 3\n");
    printf("4 pour le statistique\n");
    printf("5 pour supprimer la tache\n");
    printf("5 pour modifier la tache\n");
    scanf("%d",&choix);
    switch (choix)
    {
    case 1:
        ajouterTache();
        break;
    case 2:
        afficherTache();
        break;
    case 3:
        chercherTache();
        break;
    case 4:
        statistique();
    break;
    case 5:
        supprimerTache();
        break;
    case 6:
        modifier();
        break;
    default:
        break;
    }
    }

    }