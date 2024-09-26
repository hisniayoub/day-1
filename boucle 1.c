#include <stdio.h>

   int main() {
          int i, n ;
        
    printf("veuiller entrer le nombre pour le multiplier :  ");
    scanf("%d",&n);
        
  for(i=0;i<11;i++){
         
    printf("%dx%d=%d\n", n,i,n*i);
     }
   
   return 0;
}