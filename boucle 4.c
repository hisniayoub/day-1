#include <stdio.h>

   int main(){
            int n ,i ,impr = 1;

          printf("veuille entrer le nombre n : ");
          scanf("%d",&n);

    for(i=1;i<=n;i++){
          printf("%d ",impr);
          impr+=2;
    }

    return 0;
}
