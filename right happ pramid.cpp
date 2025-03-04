#include <stdio.h>

int main() {
   int i, j;
   for(i=1;i<=6;i++){
        for( int k=i;k<=5; k++){
            printf(" ");
        }
       for(j=1;j<=6;j++){
            if(i==6||j==i || j==i-j){
           printf("*");
       }
       else{
        printf(" ");
       }

       }



printf("\n");
   }
    return 0;
}
