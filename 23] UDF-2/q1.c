// Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.

#include<stdio.h>

int sum(int arr[], int size){
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return sum/size;
}
int main(){

    int size;

    printf("Enter the size of the an array : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element : ");
        scanf("%d", &arr[i]);
    }

    printf("%d\n", sum(arr, size));

    return 0;
}