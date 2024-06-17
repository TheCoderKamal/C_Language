// Write a Program to print 1 to 10 using a do-while loop.

#include<stdio.h>
int main(){
    int index = 1;
    do{
        printf("%d\n", index);
        index++;
    }while(index <= 10);
    return 0;
}