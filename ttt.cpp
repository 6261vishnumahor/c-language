#include <stdio.h>

int main() {
   int i, j;
   for(i=1;i<=5;i++){
       for(j=1;j<=i;j++){
           printf("*");
       }




       for(int a=i;a<=9;a++){
           printf(" ");
       }
       for(int k=i;k<=i;k++){
           printf("*");
       }
       printf("\n");
    }

    for(i=1;i<=5;i++){
       for(j=i;j<=4;j++){
           printf("*");
       }
       printf("\n");
    }
    return 0;
}
