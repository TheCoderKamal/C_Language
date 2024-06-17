// Swap value using call by reference.

#include<stdio.h>

void swap(int *a, int *b);
int main(){

    int a, b;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    swap(&a, &b);

    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("\nAfter swap : ");
    printf("\nfirst number : %d", *a);
    printf("\nsecond number : %d", *b);
}