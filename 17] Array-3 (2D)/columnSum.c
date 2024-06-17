// Write a program to find the sum of elements in each column of a 2D array. Take input for the array elements from the user.

#include<stdio.h>
int main(){
    int row, col;

    printf("Enter the Row of the array: ");
    scanf("%d",&row);

    printf("Enter the Column of the array: ");
    scanf("%d",&col);

    int array[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter the value of array[%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    for(int j = 0; j < col; j++){
        int sum = 0;
        for(int i = 0; i < row; i++){
            sum += array[i][j];
        }
        printf("\nThe sum of the col-%d is: %d", j + 1, sum);
    }

    

    return 0;
}