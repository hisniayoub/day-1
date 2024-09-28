#include <stdio.h>
#include <stdlib.h>

   int main() {
   int taille,i,nbr,max;
    
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
     }
            
                   max =t[i];
      
          for(i=0;i<taille;i++){
              if(t[i]>max){
         
                  max=t[i];
     }  
     }
               printf( " le maxi %d ",max);
    
    return 0;
}