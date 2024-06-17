// Write a Program to print the sum of all numbers using for loop.

#include<stdio.h>
int main(){
    int sum = 0;
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++){
        sum += i;
    }

    printf("sum = %d\n", sum);
        return 0;
}