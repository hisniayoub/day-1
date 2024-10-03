#include <stdio.h>
#include <string.h>
           char  rch[100][50];
           int i;
           int choix;
           char titre[100][30];
           char outeur[100][30];
           int prix[100];
           int qntt[100];
           int nbr = 0;
           char lvrsup[30];

     void modifie(){
           int   nq;
           int inx=-1;
           char chr[30];
               printf(" le nom de live qui vous modifie : ");
               scanf("%s",chr);
    for(i=0;i<nbr;i++){
           if(strcmp(titre[i],chr)==0)

                inx = i;
    }

           if(inx==-1){
              printf("live NE EXIST PAS :\n ");
    }
          else{
              printf("nouvel  quantt : ");
              scanf("%d",&nq);
              qntt[inx]=nq;
              printf(" nouvele quantt de livre %s est : %d \n",chr,qntt[inx]);
     }
     }
    void  totale(){
       int s=0;
        for(i=0;i<nbr;i++){
            s=s+qntt[i];
        }
       printf("le nombre totale de livre est :%d \n ",s);
     }

     void rocherche (){
          char  rchrch[30];
        int indx=-1;
         printf("Titre du livre qui vous rochercher. ");
          scanf("%s", rchrch);
         for(i=0;i<nbr;i++){
             if(strcmp(titre[i],rchrch)==0){

                indx = i;}
             }
            if(indx == -1)
            printf("le livre ne exist pas \n");
             else{
              printf("le livre est %s ; \n",titre[indx]);
                printf("auteur est %s ;\n ", outeur[indx]);
                  printf("prix  %d ; \n", prix[indx]);
                    printf("quantite %d ; \n", qntt[indx]);
             }


     }

     void ajoute(){

                    printf("Titre du livre. ");
                      scanf("%c", titre[nbr]);
                    printf("Auteur du livre. ");
                    scanf("%s", outeur[nbr]);
                    printf("Prix du livre. ");
                    scanf("%d", &prix[nbr]);
                    printf("Quantité en stock. ");
                    scanf("%d", &qntt[nbr]);
                    nbr++;

     }

     void affiche(){
         for (i = 0; i < nbr; i++) {
                    printf("titre : %s\n", titre[i]);
                    printf("outeur : %s\n", outeur[i]);
                    printf("prix: %d\n", prix[i]);
                    printf("quantite : %d\n", qntt[i]);
                    printf("\n ");
                }
     }


void supprime(){
  int  ind =-1;

                    printf("entrer le live qui vous supprime : ");
                    scanf("%s",lvrsup);
               for(i=0;i<nbr;i++){
                   if( strcmp(titre[i],lvrsup) == 0)
                       ind = i;
                   }
            if(ind ==-1){
                printf("makunch had lktab \n");
                printf("hado homa lktoba li andn \n");
            }
             else{
                for(i=ind;i<nbr;i++){
                   strcpy(titre[i],titre[i+1] ) ;
                    strcpy( outeur[i],outeur[i+1]);
                     prix[i]=prix[i+1];
                     qntt[i]=qntt[i+1];

                 }
                nbr--;
           printf("le livre a ete supprime \n");
}
}

int main() {



   while(1){
        printf("             1. Ajouter un Livre au Stock.\n");
        printf("             2. Afficher Tous les Livres Disponibles.\n");
        printf("             3. ROCHERCHE D UN LIVE.\n");
        printf("             4. Supprimer un Livre du Stock.\n");
         printf("             5.Afficher le Nombre Total de Livres en Stock .\n");
         printf("             6.Mettre à jour la quantité d'un livre. .\n");

        printf("              0. QUITTE.\n");


        printf("      choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                   ajoute();
                break;
            case 2 :
               affiche();

                break;
            case 3 :
                  rocherche();
                  break;
            case 4 :
                  supprime();
                  affiche();
               break;
            case 5 :
                  totale();
                  break;
          case 6 :
                  modifie();

                  break;
            case 0:
             printf("good by!\n");
                return 0;


            default:
                printf("Choix makynch 3awd mara akhra.\n");
        }


}
    return 0;
}
