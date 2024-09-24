
#include <stdio.h>

int main() {
   
   float t;
    printf("programme qui determene l'etat de l'eau :\n");

    printf("entrer la tomperature de l'eau:");
   scanf("%f",&t);
       
      if(t<0){
          printf("l'eau a l'etat solide"); }

          else if(t>100){
              printf("l'eau a l'etat gaz");
      }
              else printf("l'eau a l'etat liquide");
              
    return 0;
}


