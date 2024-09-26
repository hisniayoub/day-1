#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n ,i, f;
   
          printf("programme qui calculer la somme des nombres premiere de n. \n");
    do{
          printf("veuille entrer le nombre n : ");
          scanf("%d",&n);
}
    while(n<0);
      
       for(i=1;i<=n;i++)
        f=f+i;
        printf("  %d",f);
    
return 0;
}