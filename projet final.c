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





void ajouteRreservation(){

            printf("vueillez entrer les information suivants :\n");

            printf("le nom : ");
            scanf("%s",nom[nombreReservation]);
            printf("le prenom : ");
            scanf("%s",prenom[nombreReservation]);
            printf("le nimero de telephone  : ");
            scanf("%s",tele[nombreReservation]);
            printf("age : ");
            scanf("%d",&age[nombreReservation]);
            printf("Statut(valide, reporte, annule, traite).");
            scanf("%s",statut[nombreReservation]);
            refUnique[nombreReservation] = nombreReservation + 1 ;
            printf("la date de reservateur:\n ");
            printf("jours: ");
            scanf("%d",&jrs[nombreReservation]);
            printf("mois: ");
            scanf("%d",&mois[nombreReservation]);
            printf("annee: ");
            scanf("%d",&ans[nombreReservation]);
           nombreReservation++;


}

void  afficheReservation(){

    for(i = 0 ; i < nombreReservation ; i++){
            printf("=============================================\n");
            printf("\n");
            printf("- le nom                  : %s \n",nom[i]);
            printf("- le prenom               : %s \n",prenom[i]);
            printf("- nimero de telephone     : %s \n",tele[i]);
            printf("- l'age                   : %d \n",age[i]);
            printf("- statut                  : %s\n",statut[i]);
            printf("- referance unique        : %d\n", refUnique[i]);
            printf("- la date de reservateur  : %d/%d/%d \n",jrs[i],mois[i],ans[i]);
            printf("\n");
    }
}

 void  rochparNumUnique(){
      int ref;
      int indx=-1;
            printf("veuillez entrer le nimero unique de reservation");
            scanf("%d",&ref);
     for(i = 0 ; i < nombreReservation ; i++){
            if(refUnique[i] == ref){
              indx = i;
     }
     }
            if(indx == -1){
                printf("le referance que vous avez saisire n'existe pas");
            }
            else{
                          printf("le nom                  : %s \n",nom[indx]);
                          printf("le prenom               : %s \n",prenom[indx]);
                          printf("nimero de telephone     : %s \n",tele[indx]);
                          printf("l'age                   : %d \n",age[indx]);
                          printf("statut                  : %s\n",statut[indx]);
                          printf("referance unique        : %d\n",refUnique[indx]);
                          printf("la date de reservateur  : %d/%d/%d \n",jrs[indx],mois[indx],ans[indx]);

     }


 }
  void  rochParNom(){
     int indx=-1;
     char noom[60];
     printf("veuillez entrer le nom de reservation : ");
     scanf("%s",noom);
     for(i = 0 ; i < nombreReservation ; i++){
         if(strcasecmp(nom[i],noom)==0){
         indx=i;
         }
     }
     if(indx==-1)
                printf("le referance que vous avez saisire n'existe pas");
     else{
            printf("le nom                  : %s \n",nom[indx]);
            printf("le prenom               : %s \n",prenom[indx]);
            printf("nimero de telephone     : %s \n",tele[indx]);
            printf("l'age                   : %d \n",age[indx]);
            printf("statut                  : %s\n",statut[indx]);
            printf("referance unique        : %d\n",refUnique[indx]);
            printf("la date de reservateur  : %d/%d/%d \n",jrs[indx],mois[indx],ans[indx]);

     }
 }
 void supprime(){
     int indx=-1;
     int  nreff;
            printf("veuillez entrer le reservation qui vous supprime ");
            scanf("%d",&nreff);
            for(i=0;i< nombreReservation ;i++){
                if(refUnique[i] == nreff){
                    indx=i;
                }
               }
               if(indx==-1){
                         printf("le referance que vous avez saisire n'existe pas \n");
 }
               else{
        for(i = indx ; i < nombreReservation ; i++){
                   strcpy(nom[i],nom[i+1]);
                   strcpy(prenom[i],prenom[i+1]);
                   strcpy(tele[i],tele[i+1]);
                   age[i]=age[i+1];
                   refUnique[i]=refUnique[i+1];
                   jrs[i]=jrs[i+1];
                   mois[i]=mois[i+1];
                   ans[i]=ans[i+1];
               }
               nombreReservation--;
               }
 }

 void modifier(){
     int ref ,indx = -1 ;
     char nnom[50];
     char nprenom[50];
     char ntele[50];
     int nage;
     char nstatut[50];
     int njrs;
     int nmois;
     int nans;
     printf("entre la reference que vous modifier :");
     scanf("%d", &ref);
     for(i = 0 ; i < nombreReservation ; i++){
        if(refUnique[i] == ref){
            indx = i ;
        }
     }
     if(indx == -1){
        printf("le referance que vous avez saisire n'existe pas \n");
     }
     else{
            printf("Veuillez entrer le nom de la resirvation: ");
    scanf(" %s", nnom);
    printf("Veuillez entrer le prenom de la resirvation: ");
    scanf(" %s", nprenom);
    printf("Veuillez entrer le telephone: ");
    scanf("%s", ntele);
    printf("Veuillez entrer l'age: ");
    scanf("%d", &nage);
    printf("Veuillez entre la statut (valide, reporte, annule, traite): ");
    scanf(" %s", nstatut);
    printf("Veuillez entrer la date de reservation\n");
    printf("Le jour: ");
    scanf("%d", &njrs);
    printf("Le mois: ");
    scanf("%d", &nmois);
    printf("L'annee: ");
    scanf("%d", &nans);

         strcpy(nom[indx],nnom);
         strcpy(prenom[indx],nprenom);
         strcpy(tele[indx],ntele);
         age[indx] = nage ;
         strcpy(statut[indx],nstatut);
         jrs[indx] = njrs;
         mois[indx] = nmois;
         ans[indx] = nans;

     }

 }

 void statistque(){
     int somme = 0 ;
     int minour = 0;
     int adult = 0;
     int ager = 0;
     float moyenne;
     for(i = 0 ; i < nombreReservation ; i++){
        somme = somme + age[i] ;
     }
     moyenne = somme / nombreReservation ;
     printf("la moyenne est : %.2f \n" , moyenne);

     for(i = 0 ; i < nombreReservation ; i++){
        if(age[i] >= 18){
            minour++;
        }
        else if(age[i] < 18 && age[i] > 36){
            adult++ ;
        }
        else{
           ager++ ;
        }
     }
     printf("============================================ \n");
     printf("les patients (0 - 18) est : %d \n", minour);
     printf("les patients (19 - 35) est : %d \n", adult);
     printf("les patients ( +36 ) est : %d \n", ager);
     printf("============================================\n");

 }



int main() {
    int choix;

   while(1){
       printf("=============================================\n");
       printf("    1. Ajouter une reservation .\n");
       printf("    2. Modifier ou supprimer une reservation.\n");
       printf("    3. Afficher les details d'une reservation .\n");
       printf("    4. Recherche des reservations : .\n");
       printf("    5. Statistiques .\n");
       printf("    0. quitte le programme \n");
       printf(" choix : ");
       scanf("%d",&choix);

       switch(choix){
           case 1 :
                   ajouteRreservation();
                break;
           case 2 :
               printf("     1-Modifier     2-supprimer");
               scanf("%d", &choix);
               if(choix == 1){
                  modifier();
               }
               else{
                supprime();
               }

                 break;
           case 3 :
               afficheReservation();
                   break;
           case 4 :
               printf("     1-par nom     2-par reference \n");
               printf("      choix : ");
               scanf("%d",&choix);
               if(choix == 1 )
                rochParNom();
               else{
                rochparNumUnique();
               }
                break;
           case 5 :
               statistque();
               break;
           case 6 :
               break;
           case 0 :
               return 0;
           default:
                  printf("vous avez choisi jhdhd \n");
               break;
       }
   }


    return 0;
}
