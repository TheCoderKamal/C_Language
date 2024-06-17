// Write a C program to define a TSRN function named `addNumbers()` that takes two integers as input and calculates their sum. Print the result inside the function. Call this function from the `main()` function and display the sum of two numbers.

#include<stdio.h>

void addNumbers(int num1, int num2);
int main(){
    int num1, num2;

    printf("Enter first number : ");
    scanf("%d",&num1);

    printf("Enter second number : ");
    scanf("%d",&num2);

    addNumbers(num1, num2);

    return 0;
}

void addNumbers(int num1, int num2){
    int sum = num1 + num2;
    printf("The sum of %d and %d : %d", num1, num2, sum);
}