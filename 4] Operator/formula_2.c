// (a + b)2  +  (a + b)2

#include<stdio.h>
int main(){
    float a, b;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    float answer = (a + b)*2 + (a + b)*2;

    printf("The answer is: %f", answer);
    return 0;
}