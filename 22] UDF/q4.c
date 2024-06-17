// Define a TSRN function `calculateCube()` that takes an integer as input and calculates its cube. Print the result inside the function. Call this function from the `main()` function and display the cube of a number

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
    int cube = num * num * num;
    printf("The cube of %d : %d", num, cube);
}