// Develop a program in [programming language of choice] that creates a 1D array based on user input and computes the sum of all its elements.

#include<stdio.h>
int main(){

    int size;

    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int arr[size], sum = 0;

    for (int index = 0; index < size; index++)
    {
        printf("Enter the value of arr[%d] : ", index);
        scanf("%d",&arr[index]);
    }

    for (int index = 0; index < size; index++)
    {
        sum += arr[index];
    }

    printf("\nThe sum of all elements : %d", sum);
    return 0;
}