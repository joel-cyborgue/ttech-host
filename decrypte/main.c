#include <stdio.h>
#include <stdlib.h>

char chaineInt[] = "3581321345589144233377";
char chaineChar[] = "CEHACBACDEEHIADDBCCCGG";

int main(){
   printf("3581321345589144233377");
   printf(" >>\n");
   for(int i=0; i<22; i++){
     printf("%c", chaineInt[i]+48);
   }
   printf(" >>\n");
   for(int i=0; i<22; i++){
     printf("%c", chaineChar[i] + chaineInt[i]-16);
   }
 return 0;
}
