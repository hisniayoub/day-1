#include <stdio.h>

int main() {
   
    char r;
    printf("entrer un caractére :");
    scanf("%c",&r);
    switch(r){
      case 'a':
      case 'e':
      case 'y':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'Y':
      case 'U':
      case 'I':
      case 'O':
      printf("cette caractére Voyelle ");
      break;
      default:
      printf("cette caractér non voyelle");
      break;
    
    }
    

    
    return 0;
}