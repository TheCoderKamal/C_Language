// Write a Program to print 1 to N using a while loop.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number till you wanna print : ");
    scanf("%d", &n);

    int i = 1;

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}