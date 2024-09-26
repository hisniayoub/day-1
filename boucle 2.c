#include <stdio.h>
#include <stdlib.h>

int main() {
    int n ,i, f;
    printf("entrer n : ");
    scanf("%d",&n);
    if(n<0){
        printf("ce nombre est negative. \n");
        printf("veuilles entrer le nombre positive. ");
    }
    else if(n==0){
        printf("la factorielle de 0 est : 1");
    }
    else{ 
        f=1;
    for(i=1;i<=n;i++)
        f=f*i;
        printf(" %d! = %d",n,f);
    
    }
    return 0;
}