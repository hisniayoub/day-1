#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,D,x1,x2;
    
    printf(" entrer a : ");
        scanf("%f",&a);
    printf(" entrer b : ");
        scanf("%f",&b);
    printf("entrer c  :");
        scanf("%f",&c);
    
       D = pow(b,2)-4*a*c;
    
             if (D>0){
        x1= (-b +sqrt(D))/(2*a);
        x2=(-b- sqrt(D))/(2*a);
    printf("equation admis deux solutions \n");
     printf("  S = %f \n",x1);
     printf("  S = %f",x2);
        
    }
        else if(D=0){
            x1= -b /(2*a);
         printf("equation admis une solution \n");;
         printf("  S = %f",x1);
     }
        else{
     printf("pas de solution");
         
     }

    
  return 0;
} 