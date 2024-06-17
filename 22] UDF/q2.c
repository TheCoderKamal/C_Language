// Define a TSRN function called `multiplyNumbers()` that takes two integers as parameters and calculates their multiplication. Print the result inside the function. Call this function from the `main()` function and display the multiplication of the two numbers.

#include<stdio.h>

void multiplyNumbers(int num1, int num2);
int main(){
    int num1, num2;

    printf("Enter first number : ");
    scanf("%d",&num1);

    printf("Enter second number : ");
    scanf("%d",&num2);

    multiplyNumbers(num1, num2);

    return 0;
}

void multiplyNumbers(int num1, int num2){
    int mul = num1 * num2;
    printf("The multiplication of %d and %d : %d", num1, num2, mul);
}