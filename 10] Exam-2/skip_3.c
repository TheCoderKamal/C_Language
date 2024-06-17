// Write a Program to print all even from 1 to 50 by skipping 3 numbers using do while loop.

#include<stdio.h>
int main(){

    int number = 1;

    do
    {
        if (number % 2 == 0)
        {
            printf("%d\n",number);
            number += 7;
        }
        else{
            number ++;
        }

    } while (number <= 50);
    
    return 0;
}