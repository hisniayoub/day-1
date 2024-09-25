#include <stdio.h>

int main() {
    int num;
    printf("entrer la numbre : ");
    scanf("%d",&num);
    if(num<0){
        printf("cette numbre est négative.");
    }
    else if(num>0){
        printf("cette numbre est posétive.");
        
    }
    else
    printf("numbre 0 SONT null.");

    return 0;
}