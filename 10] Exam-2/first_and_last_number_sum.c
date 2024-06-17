// Write a Program to find the sum of a first and the last digit of a number.

#include<stdio.h>
int main(){
    int number,firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    int abs = number < 0 ? -number : number;

    lastDigit = abs;
    firstDigit = abs % 10;

    while(lastDigit >= 10){
        lastDigit /= 10;
    }

    int sum = firstDigit + lastDigit;

    printf("The sum of first and last digit of %d is %d", number, sum);
    return 0;
}