// Write a program to find the sum of all elements in a 2D array. Take input for the array elements from the user.

#include<stdio.h>
int main(){
    int row, col, sum = 0;

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

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum += array[i][j];
        }
    }

    printf("The sum of the array is: %d",sum);

    return 0;
}