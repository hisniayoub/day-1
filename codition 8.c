#include <stdio.h>

int main() {
    float la_note;
    printf("entrer la note : ");
    scanf("%f",&la_note);
    
    if(la_note<10){
         printf("vous est recale");
    }
 
     else if(la_note>=10 && la_note<=12){
       printf("vous est obtient la mention passable ");  }
        else if(la_note>12 && la_note<=14){
         printf("vous est obtient la mention assez bien. "); 
        }
         else if(la_note>14 && la_note<=16){
         printf("vous est obtient la mention bien "); 
         }
         
    else
     printf(" obtient la mention très bien ");
    
     
    return 0;
}