/*

                1
              2 1
            3 2 1
          4 3 2 1
        5 4 3 2 1 
*/



#include<stdio.h>
int main(){
    for (int row = 5; row >= 1; row--){

        for (int col = 5; col >= 1; col--)
        {
            if (row - 1 > 5 - col) 
            {
                printf("  ");
            }
            else{
                printf("%d ", col);
            }         
        }
        printf("\n");      
    }
        return 0;
}