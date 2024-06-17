/*
    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1
*/

#include<stdio.h>
int main(){

    for (int row = 1; row <= 5; row++){
        for(int col = 1; col <= 5; col++){
            if(row >= col){ 
                printf("%d ", col);
            }
            else{
                printf("  ");
            }
        }
        for (int col = 6; col <= 10; col++){
            if(row <= 10 - col){  
                printf("  ");
            }
            else{
                printf("%d ", (11 - col));
            }
        }
            printf("\n");
    }

        return 0;
}