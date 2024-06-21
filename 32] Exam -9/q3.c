#include<stdio.h>
int main(){

    int number, digit, ans = 0;
    printf("\nTHIS IS THE PROGRAM FOR REVERSE THREE NUMBER : \n\n");

    printf("Enter a three digit number : ");
    scanf("%d", &number);

    while(number > 0){
        digit = number % 10;
        ans = ans * 10 + digit;
        number /= 10;
    }

    printf("The reversed number : %d", ans);
    return 0;
}