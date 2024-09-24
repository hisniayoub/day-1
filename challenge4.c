#include <stdio.h>

int main() {
   
   float ks , ms;
    printf("programme qui ks en ms :\n");

    printf("entrer la vitesse en ks :");
   scanf("%f",&ks); 
       ms= ks *0.27778;
      printf("la vitesse en ms est : %.5f",ms);


    return 0;
}
