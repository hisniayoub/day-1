// Online C compiler to run C program online
#include <stdio.h>

char nom[100][100];
char prenom[100][100];
char tele[100][100];
int age[100];
char statut[100][100];
int refUnique = 0;
int jrs[50];
int mois[50];
int ans[50];
int nombreReservation = 0;
int i ;


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
            refUnique = nombreReservation+1;
            printf("la date de reservateur:\n ");
            printf("jours: ");
            scanf("%d",&jrs[nombreReservation]);
            printf("mois: ");
            scanf("%d",&mois[nombreReservation]);
            printf("année: ");
            scanf("%d",&ans[nombreReservation]);

}

void  afficheReservation(){
            printf("\n");
            printf("le nom                  : %s \n",nom[i]);
            printf("le prenom               : %s \n",prenom[i]);
            printf("niméro de telephone     : %s \n",tele[i]);
            printf("l'age                   : %d \n",age[i]);
            printf("statut                  : %s\n",statut[i]);
            printf("referance unique        : %d\n",refUnique);
            printf("la date de reservateur  : %d/%d/%d \n",jrs[i],mois[i],ans[i]);
            printf("\n");

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
                afficheReservation();
                 break;
           case 3 :
           case 4 :
           case 5 :
           case 6 :
break;

       }
   }


    return 0;
}
