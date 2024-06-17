// Find value of x using chain of pointer.

#include<stdio.h>
int main(){
    char var = 'x';

    int *ptr1 = &var;
    int **ptr2 = &ptr1;

    printf("%u\t%u\t%c\n", ptr2, *ptr2, **ptr2);
    return 0;
}