/*
    11
    12 13
    14 15 16
    17 18 19 20
    21 22 23 24 25
*/

#include<stdio.h>
int main(){

    int count = 11;
    
    for (int row = 1; row <= 5; row++){
        
        for (int col = 1; col <= row; col++){
            printf("%-3d ",count);
            count++;
        }
        printf("\n");
    }

        return 0;
}