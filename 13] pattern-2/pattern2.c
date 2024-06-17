/*
            5
          4 5
        3 4 5
      2 3 4 5
    1 2 3 4 5 
*/



#include<stdio.h>
int main(){
    for (int row = 1; row <= 5; row++){
        for (int col = 1; col <= 5; col++)
        {
            if (5 - row >= col){
                printf("  ");
            }
            else
            {
                printf(" %d", col);
            }            
        }
        printf("\n");       
    }
        return 0;
}