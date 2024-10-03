// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nom[100][100];
char prenom[100][100];
char tele[100][100];
int age[100];
char statut[100][100];
int refUnique[100];
int jrs[50];
int mois[50];
int ans[50];
int nombreReservation =0 ;
int i ;
int indx=-1;




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
            refUnique[nombreReservation] = nombreReservation + 1 ;
            printf("la date de reservateur:\n ");
            printf("jours: ");
            scanf("%d",&jrs[nombreReservation]);
            printf("mois: ");
            scanf("%d",&mois[nombreReservation]);
            printf("année: ");
            scanf("%d",&ans[nombreReservation]);
           nombreReservation++;


}

void  afficheReservation(){
    for(i = 0 ; i < nombreReservation ; i++){
            printf("\n");
            printf("le nom                  : %s \n",nom[i]);
            printf("le prenom               : %s \n",prenom[i]);
            printf("niméro de telephone     : %s \n",tele[i]);
            printf("l'age                   : %d \n",age[i]);
            printf("statut                  : %s\n",statut[i]);
            printf("referance unique        : %d\n", refUnique[i]);
            printf("la date de reservateur  : %d/%d/%d \n",jrs[i],mois[i],ans[i]);
            printf("\n");
    }
}

 void  rochparNumUnique(){

     int ref;
            printf("veuillez entrer le niméro unique de reservation");
            scanf("%d",&ref);
     for(i = 0 ; i < nombreReservation ; i++){
            if(refUnique[i] == ref){
              indx=i;
     }
     }
            if(indx==-1)
                printf("le referance que vous avez saisire n'existe pas");
     else{
                          printf("le nom                  : %s \n",nom[indx]);
                          printf("le prenom               : %s \n",prenom[indx]);
                          printf("niméro de telephone     : %s \n",tele[indx]);
                          printf("l'age                   : %d \n",age[indx]);
                          printf("statut                  : %s\n",statut[indx]);
                          printf("referance unique        : %d\n",refUnique[indx]);
                          printf("la date de reservateur  : %d/%d/%d \n",jrs[indx],mois[indx],ans[indx]);

     }


 }
  void  rochParNom(){
     int indx=-1;
     char noom[60];
     printf("veuillez entrer le nom de reservation");
     scanf("%s",noom);
     for(i = 0 ; i < nombreReservation ; i++){
         if(strcmp(nom[i],noom)==0){
         indx=i;
         }
     }
     if(indx==-1)
                printf("le referance que vous avez saisire n'existe pas");
     else{
          printf("le nom                  : %s \n",nom[indx]);
            printf("le prenom               : %s \n",prenom[indx]);
            printf("niméro de telephone     : %s \n",tele[indx]);
            printf("l'age                   : %d \n",age[indx]);
            printf("statut                  : %s\n",statut[indx]);
            printf("referance unique        : %d\n",refUnique[indx]);
            printf("la date de reservateur  : %d/%d/%d \n",jrs[indx],mois[indx],ans[indx]);

     }
 }
//  void supprime(){
//      char sup[50];
//             printf("veuillez entrer le reservation qui vous supprimé ");
//             scanf("%s",sup);
//             for(i=0;i= nombreReservation ;i++){
//                 if(strcmp())
// }
//  }



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

                    rochParNom();
                   break;
           case 4 :
                rochparNumUnique();
                break;
           case 5 :
               break;
           case 6 :
               break;
           case 0 :
               break;

       }
   }


    return 0;
}
