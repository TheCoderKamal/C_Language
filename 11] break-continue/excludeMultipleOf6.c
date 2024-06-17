// Write a C program using a `for` loop to print all numbers between 1 and 60, excluding multiples of 6. Use the `continue` statement to skip printing multiples of 6.

#include<stdio.h>
int main(){
    for (int i = 1; i <= 60; i++)
    {
        if (i % 6 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    
    return 0;
}