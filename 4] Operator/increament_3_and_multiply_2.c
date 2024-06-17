// 4Write a C program that increments a variable by 3 and then multiplies it by 2 using assignment operators. Print the final value of the variable. If value was 5 adding 3 = 8 , further multiplying it to 2 = 16.

#include<stdio.h>
int main(){
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    number += 3;
    number *= 2;

    printf("final value: %f\n", number);

    return 0;
}