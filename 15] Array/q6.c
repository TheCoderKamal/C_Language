// Write a program to find the largest element present in an array of integers.

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

    int max = arr[0];

    for(int index = 0; index < size; index++){
        if(arr[index] > max){
            max = arr[index];
        }
    }

    printf("\nThe maximum value : %d", max);
}