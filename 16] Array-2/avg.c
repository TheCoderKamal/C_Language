// Q1. Take input from user for array elements prints it's average

#include<stdio.h>
int main(){

    int size;

    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int arr[size], sum = 0;
    float avg = 0;

    for (int index = 0; index < size; index++)
    {
        printf("Enter the value of arr[%d] : ", index);
        scanf("%d",&arr[index]);
    }

    for (int index = 0; index < size; index++)
    {
        sum += arr[index];
    }

    avg = (float) sum / size;

    printf("\nThe sum of all elements : %f", avg);
    return 0;
}