// Write a C program using a `for` loop to print all even numbers between 20 and 30, except for 24. Use the `continue` statement to skip printing the number 23.

#include<stdio.h>
int main(){
    for (int i = 20; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            if(i == 24){
                continue;
            }  
            printf("%d\n", i);
        }
        if (i == 23)
        {
            continue;
        }
    }
    
    return 0;
}