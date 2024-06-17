// Write a Program to count the total number of digits in a number.

#include<stdio.h>
int main(){
    int number;
    int digit = 0;

    printf("Enter a number : ");
    scanf("%d",&number);

    while (number >= 1)
    {
        number /= 10; // number = number / 10;
        digit++;
    }

    printf("Total number of digit : %d",digit);

    return 0;
}