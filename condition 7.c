#include <stdio.h>

int main() {
    char a;

     printf("entrer le caractere  : ");
     scanf("%c",&a);
     if(a >= 65 && a <= 90){
     printf("le caractère donné est un alphabet majuscule .");
     }
     else if(a >= 97  && a <= 122){
     printf("le caractere donné est un alphabet minuscule");
    }
    else
    printf(" c'est un autre caractere ");
    return 0;
}
