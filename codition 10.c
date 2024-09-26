#include stdio.h

int main() {
 int m , j , a ;
 printf(entrer la date jma  );
 scanf(%d%d%d,&j,&m,&a);
   switch(m)
   {
     case 01  printf(%d-janvier-%d, j,a);
       break;
     case 02  printf(%d-fevrier-%d,j,a);
       break;
     case 03  printf(%d-mars-%d,j,a);
       break;
     case 04  printf(%d-avril-%d, j,a);
       break;
     case 05  printf(%d-mai-%d,j,a);
       break;
     case 06  printf(%d-juin-%d,j,a);
       break;
     case 07  printf(%d-juille-%d, j,a);
       break;
     case 8  printf(%d-aout-%d,j,a);
       break;
     case 9  printf(%d-septembre-%d,j,a);
       break;
     case 10  printf(%d-octobre-%d, j,a);
       break;
     case 11  printf(%d-novembre-%d,j,a);
       break;
     case 12  printf(%d-decembre-%d,j,a);
       break;
     default  printf(  la nombre de m entre 01 et 12);
     
       break;
      
   }
   
   return 0;
}