// Create a TSRN function called `calculateSquare()` that takes an integer as input and calculates its square. Print the result inside the function. Call this function from the `main()` function and display the square of a number.

#include<stdio.h>

void multiplyNumbers(int num);
int main(){
    int num;

    printf("Enter first number : ");
    scanf("%d",&num);

    multiplyNumbers(num);

    return 0;
}

void multiplyNumbers(int num){
    int sqr = num * num;
    printf("The square of %d : %d", num, sqr);
}