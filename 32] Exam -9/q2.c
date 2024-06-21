#include<stdio.h>
int main(){

    int size;
    printf("\nTHIS IS THE PROGRAM TO FIND SMALLEST NUMBER IN 1D ARRAY: \n\n");
    printf("Enter the size of an Array : ");
    scanf("%d", &size);
    
    int arr[size];

    for (int i = 0; i < size; i++){
        printf("Enter the value of arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for (int i = 0; i < size; i++){
        if(arr[i] < arr[0]){
            min = arr[i];
        }
    }

    printf("The smallest element in whole array is : %d", min);
    return 0;
}