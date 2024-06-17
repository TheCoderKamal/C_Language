/*
    41
    41 42
    41 42 43
    41 42 43 44
    41 42 43 44 45
*/


#include<stdio.h>
int main(){

    for (int row = 1; row <= 5; row++){
        int count = 41;
        for (int col = 1; col <= row; col++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

        return 0;
}