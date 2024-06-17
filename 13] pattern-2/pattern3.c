/*
            5
          4 4
        3 3 3
      2 2 2 2
    1 1 1 1 1
*/

#include<stdio.h>
int main(){
    
    for (int row = 5; row >= 1; row--)
    {
        for (int col = 5; col >= 1; col--)
        {
            if(row - 1 > 5 - col){ 
                printf("  ");
            }
            else{
                printf("%d ", row);
            }
        }
        printf("\n");       
    }
    return 0;
}