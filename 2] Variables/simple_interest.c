// Q.4 Write a Program to find Simple interest.

#include<stdio.h>
int main(){
    int principal = 100;
    int rate = 30;
    int time = 10;
    int interest = (principal * rate * time) / 100;
    printf("The simple interest : %d currency", interest);

    return 0;
}