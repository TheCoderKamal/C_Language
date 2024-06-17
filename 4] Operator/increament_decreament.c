// Write a C program that demonstrates the use of increment (++) and decrement (--) operators. Start with a variable at 7, decrement it twice, and then increment it once. Print the final value.


#include<stdio.h>
int main(){
    float number;

    printf("Enter the number : ");
    scanf("%f",&number);

    number--;
    number--;
    number++;

    printf("Final number : %f\n",number);
    return 0;
}