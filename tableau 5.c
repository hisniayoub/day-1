#include <stdio.h>
#include <stdlib.h>

   int main() {
        
            int taille,i,n,min ;
            
               printf("veuillez entrer la taille de tableau : ");
               scanf("%d",&taille);
            int t[taille];
          
    for(i=0;i<taille;i++){
              printf("veuillez entrer lelements de tab : ");
              scanf("%d",&n);
              t[i]=n;
        } 
        
    for(i=0;i<taille;i++){
               printf("%d \n",t[i]);
         }
           
            min=t[0];
    for(i=0;i<taille;i++){
          if(t[i]<min){
            min=t[i];
         }
         }
      printf("le minimun est %d",min);
          
          
    return 0;
}