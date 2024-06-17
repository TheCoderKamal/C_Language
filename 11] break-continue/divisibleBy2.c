// Write a C program using a `for` loop to find the first 10 numbers divisible by 2. Use the `break` statement to exit the loop after finding these numbers.

#include<stdio.h>
int main(){

    int count = 0;

    for (int i = 1; i <= 40; i++)
    {
        if (i % 2 == 0){
            printf("%d\n", i);
            count++;
        }
       
        if (count == 10)
        {
            break;
        }
        
    }
    
    return 0;
}