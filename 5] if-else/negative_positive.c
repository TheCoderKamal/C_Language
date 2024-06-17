// Write a Program to find if a given number is neutral or not using a ladder if else.

#include<stdio.h>
int main(){
    float number;

    printf("Enter a number : ");
    scanf("%f", &number);

    if (number > 0){
        printf("%f is positive number", number);
    }
    else if(number == 0){
        printf("%f is a neutral number", number);
    }
    else{
        printf("%f is a negative number", number);
    }
    
    return 0;
}