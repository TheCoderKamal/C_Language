/*
    5 4 3 2 1
      5 4 3 2
        5 4 3
          5 4
            5
*/



#include<stdio.h>
int main(){

    for (int row = 1; row <= 5; row++)
    {
        int count = 5;
        for (int col = 5; col >= 1; col--)
        {
            if (row > 6 - col)     
            {
                printf("  ");
            }
            else
            {   
                printf("%d ", count);
                count--;
            }   
        }
        printf("\n");   
    }
    return 0;
}