#include <stdio.h>
#include <stdlib.h>

   int main() {
   int taille,i,nbr;
    
      printf("entrer la  taille de tableau : ");
      scanf("%d",&taille);
      
   int t[taille];
       
       for(i=0;i<taille;i++){
            printf("entrer nbr : ");
            scanf("%d",&nbr);
            t[i]=nbr;
            
      }
      for(i=0;i<taille;i++)
            printf("%d \n",t[i]);
      
    
    return 0;
}