/*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include<stdio.h>
int main(){

    for (int row = 1; row <= 5; row++){

        for(int col = 1; col <= 5; col++){
            if (row - 1 <= 5 - col)  
            {
                printf("%d ",col);
            }
            else
            {
                printf("  ");
            }  
        }
        printf("\n");
    }
    for (int row = 2; row <= 5; row++){

        for(int col = 1; col <= 5; col++){
            if (row >= col)                  
            {                                                   
                printf("%d ",col);                              
            }
            else
            {
                printf("  ");
            }  
        }
        printf("\n");
    }
    return 0;
}