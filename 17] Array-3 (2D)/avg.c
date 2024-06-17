// Write a Program to find the average of a given 2D array.

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

    float avg = (float)sum / (float)(row * col);

    printf("The average of the array is: %.2f",avg);

    return 0;
}