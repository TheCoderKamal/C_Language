// Swap value using call by value.

#include<stdio.h>

void swap(int a, int b);
int main(){

    int a, b;

    printf("Enter first number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);  

    swap(a ,b);     
    return 0;
}

void swap(int a, int b){
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping : \n");
    printf("First number : %d\n",a);
    printf("Second number : %d\n",b);
}