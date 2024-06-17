// 3Write a C program that uses the assignment operators to increment a variable by 5 and then decrement it by 2. Print the final value of the variable. If value was 10 adding 5 = 15, then subtracting 2 =13

#include<stdio.h>
int main(){
    float number;

    printf("Enter the number: ");
    scanf("%f", &number);

    number += 5;
    number -= 2;

    printf("final answer: %f\n", number);
    return 0;
}