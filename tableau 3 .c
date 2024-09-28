#include <stdio.h>
#include <stdlib.h>

   int main() {
   int taille,i,nbr,S=0;
    
      printf("entrer la  taille de tableau : ");
      scanf("%d",&taille);
      
   int t[taille];
       
       for(i=0;i<taille;i++){
            printf("entrer nbr : ");
            scanf("%d",&nbr);
            t[i]=nbr;
            
      }
      for(i=0;i<taille;i++){
            printf("%d \n",t[i]);
            S=S+t[i];
      }
      
       printf("la somme des element de tableau : %d",S);
     
     
      
    
    return 0;
}