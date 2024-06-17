// Write a TSRN function named `divideNumbers()` that takes two integers as input and calculates their division. Print the result inside the function. Handle the case when the divisor is zero. Call this function from the `main()` function and display the quotient.

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
    float div = (float)num1 / (float)num2;
    printf("The multiplication of %d and %d : %f", num1, num2, div);
}