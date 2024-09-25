#include <stdio.h>

int main() {
    float mois , jours, heures, minutes, secondes,nbr_annee;
    int choix;
    
    printf("entrer nobre d'annee : ");
    scanf("%f",&nbr_annee);
     printf("1 entrer les mois \n");
    printf("2 entrer les jours \n");
    printf("3 entrer les heurs\n");
    printf("4 entrer les minutes\n");
    printf("5 entrer les secondes \n");
    printf("entrer les choix : ");
    
    scanf("%d",&choix);
    switch(choix){ 
     case 1:
         printf("%.2f",nbr_annee*12);
           break;
     case 2:
         printf("%.2f",nbr_annee*365);
            break;
     case 3:
         printf("%.2f",nbr_annee*8760);
           break;
     case 4:
         printf("%.2f",nbr_annee*525600);
           break;
     case 5:
         printf("%.2f",nbr_annee*31536000);
           break;
     default:
           break;
          
}
    return 0;
}