// Write a program to find the sum of elements obtained by adding elements along the main diagonal and anti-diagonal of a 2D array row-wise. Take input for the array elements from the user.

#include<stdio.h>
int main(){
    int row, col;
    

    printf("Enter the Row of the array: ");
    scanf("%d",&row);

    printf("Enter the Column of the array: ");
    scanf("%d",&col);

    int r = 0, c = col - 1;

    int array[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter the value of array[%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++){
        int sum = 0;

        for(int j = 0; j < col; j++){
            if ((i == r) && (j == c))
            {
                sum += array[i][j];
                r++;
                c--;
            }
            else if(i == j){
                sum += array[i][j];
            }
        } 
        printf("\nThe sum of the Diagonal and Anti-diagonal element of row - %d: %d", i+1, sum);     
    }

    
    return 0;
}
