// Write a Program to find all the negative elements from a given 1D array.

#include<stdio.h>
int main(){
    int size;

    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int number[size];

    for(int index = 0; index < size; index++){
        printf("Enter the value of number[%d] : ", index);
        scanf("%d",&number[index]);
    }

    for (int index = 0; index < size; index++){
        if(number[index] < 0){
            printf("%d\n",number[index]);
        }
    }
        return 0;
}