// Write a C program to take a string input from the user and convert it to uppercase.

#include<stdio.h>
int main(){
    char str[100];

    printf("Enter a string: ");
    gets(str);

    puts(strupr(str));
    return 0;
}