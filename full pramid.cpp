#include <stdio.h>

int main() {
   int i, j;
   for(i=1;i<=6;i++){
       for(j=6;j>=i;j--){
           printf(" ");
       }
       for(int k=0;k<i;k++){
           printf("*");
       }
              for(int k=1;k<i;k++){
           printf("*");
       }
       printf("\n");
   }
    return 0;
}
