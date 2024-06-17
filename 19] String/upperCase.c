// Write a Program to convert the given string in uppercase without using any string function.

#include<stdio.h>
int main(){
    char name[] = "hello world";

    for(int i = 0; name[i] != '\0'; i++){
        if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] -= 32;
        }

        printf("%c", name[i]);
    }

    return 0;
}