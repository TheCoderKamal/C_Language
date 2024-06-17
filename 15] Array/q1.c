// Write a program in [programming language of choice] that initializes a 1D array and takes user input to populate its elements.

#include<stdio.h>
int main(){

    int size;
    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int arr[size];

    for (int index = 0; index < size; index++)
    {
        printf("Enter the value of arr[%d] : ", index);
        scanf("%d",&arr[index]);
    }

    for (int index = 0; index < size; index++)
    {
        printf("\nThe value of arr[%d] : %d", index, arr[index]);
    }
    

    return 0;
}