// 6.Ask the user to enter a number and multiply it by a constant integer

#include<stdio.h>
int main(){
    const int constant = 27;
    float number;
    

    printf("Enter a number: ");
    scanf("%f", &number);

    float answer = number * constant;

    printf("The answer is: %f\n", answer);
    return 0;
}