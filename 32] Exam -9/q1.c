#include<stdio.h>
int main(){

    int number;
    printf("\nTHIS IS THE PROGRAM FOR POSITIVE AND NEGATIVE NUMBER: \n\n");
    printf("Enter a number : ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("number - %d is negative.", number);
    }
    else if(number == 0)
    {
        printf("number - %d is neutral.", number);
    }
    else
    {
        printf("number - %d is positive.", number);
    }
    
    return 0;
}