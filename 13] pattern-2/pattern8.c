/*
          *
        * * *
      * * * * *
    * * * * * * * 
  * * * * * * * * *
    * * * * * * *
      * * * * * 
        * * *
          *
*/


#include<stdio.h>
int main(){

    for (int row = 1; row <= 5; row++)
    {
      for (int space = 1; space <= 5 - row; space++){
        printf("  ");
      }
        for (int col = 1; col <= (row * 2) - 1; col++)
        {
          printf(" *");
        }
        printf("\n");   
    }

    for(int row = 4; row >= 1; row--){
        for (int space = 1; space <= 5 - row; space++){
            printf("  ");
        }
        for(int col = 1; col <= (row * 2) - 1; col++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}