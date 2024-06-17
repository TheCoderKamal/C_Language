// Write a C program using a `for` loop to find the first 5 numbers divisible by 8. Use the `break` statement to exit the loop after finding these numbers.

#include<stdio.h>
int main(){

    int count = 0;

    for (int i = 1; i <= 80; i++)
    {
        if (i % 8 == 0)
        {
            printf("%d\n", i);
            count++;
        }
        if(count == 5){
            break;
        }
    }
    

    return 0;
}