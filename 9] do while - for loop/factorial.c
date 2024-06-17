// Write a Program to print the factorial of a number using for loop.

#include<stdio.h>
int main(){
    int number;
    int factorial = 1;

    printf("Enter a number : ");
    scanf("%d", &number);

    for(int i = number; i >= 1; i--){
        factorial *= i;
    }

    printf("The factorial of %d is %d", number, factorial);
    return 0;
}