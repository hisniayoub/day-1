// Online C compiler to run C program online
#include <stdio.h>

char nom[100][100];
char prenom[100][100];
char tele[100][100];
int age[100];
char statut[100][100];
int refUnique[100];
int jrs[50];
int mois[50];
int ans[50];
int nombreReservation = 0;



void ajouteRreservation(){
    printf("vueillez entrer les information suivants :\n");
    printf("le nom : ");
    scanf("%s",nom[nombreReservation]);
     printf("le prenom : ");
    scanf("%s",prenom[nombreReservation]);
     printf("le niméro de téléphone  : ");
    scanf("%s",tele[nombreReservation]);
     printf("age : ");
    scanf("%d",&age[nombreReservation]);
     printf("Statut(validé, reporté, annulé, traité).");

    scanf("%s",statut[nombreReservation]);
    
     printf("la date de reservateur:\n ");
     printf("jours: ");
    scanf("%d",&jrs[nombreReservation]);
    printf("mois: ");
    scanf("%d",&mois[nombreReservation]);
    printf("année: ");
    scanf("%d",&ans[nombreReservation]);
}




int main() {
    int choix;
   
   while(1){
       
       printf("1. Ajouter une réservation .\n");
       printf("2. Afficher les détails d'une réservation .\n");
       printf("3. Recherche des réservations : .\n");
       printf("4. Modifier ou supprimer une réservation.\n");
       printf("6. Statistiques .\n");
       printf("0. quitté le programme \n");
       printf(" choix : ");
       scanf("%d",&choix);
       
       switch(choix){
           case 1 :
                ajouteRreservation();
                break;
           case 2 :
                  
           case 3 :
           case 4 :
           case 5 :
           case 6 :
           case 0 :
           
       }
   }
   

    return 0;
}