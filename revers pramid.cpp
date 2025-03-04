#include <stdio.h>

int main() {
   int i, j;
   for(i=1;i<=6;i++){
       for(j=1;j<i;j++){
           printf(" ");
       }
       for(int k=i;k<=6;k++){
           printf(" *");
       }
       printf("\n");
   }
    return 0;
}
