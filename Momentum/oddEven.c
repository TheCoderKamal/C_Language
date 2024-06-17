// Write a Program to check whether a number is even or odd using the ternary operator.

#include<stdio.h>
int main(){

    int number;

    printf("Enter a number : ");
    scanf("%d",&number);

    number == 0 ? printf("%d is a neutral number", number) : number > 0 ? printf("%d is a positive number", number)
                                                                        : printf("%d is a negative number", number);
    return 0;
}