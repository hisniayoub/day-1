#include <stdio.h>

int main() {
   
    float Yards , km;
    
    printf("programme qui transfer kelometre en Yards :\n");


    printf("entrer la destance en km:");
   scanf("%f",&km); 
       Yards= km * 1093.61;
      printf("la destance en Yards est : %.2f", Yards);

    return 0;
}
