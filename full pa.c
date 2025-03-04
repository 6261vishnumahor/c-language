#include <stdio.h>

int main() {
   int i, j;
   for(i=0;i<=5;i++){
       for(j=i;j<=7;j++){
           printf(" ");
       }
       for(int k=0;k<2*i+1;k++){
           printf("*");
       }
       printf("\n");
   }
    return 0;
}
