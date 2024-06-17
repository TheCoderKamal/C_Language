// Create a C program that defines a function printTable() which takes no arguments and prints the multiplication table of 5 from 1 to 10. Call this function from the main() function.

#include<stdio.h>

void printTable();
int main(){
    printTable();
}

void printTable(){
    for (int i = 1; i <= 10; i++){
        printf("4 * %d = %d\n", i, 4*i);
    }
}