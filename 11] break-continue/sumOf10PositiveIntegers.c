// Write a C program using a `for` loop to calculate the sum of the first 10 positive integers. However, if the sum becomes greater than 50, use the `break` statement to exit the loop.

#include<stdio.h>
int main(){

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i;

        if (sum > 50)
        {
            sum -= i;
            break;
        }
        
    }
    printf("Sum : %d",sum);

    return 0;
}