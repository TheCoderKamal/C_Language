// Write a Program to convert the given string in lowercase without using any string function.

#include<stdio.h>
int main(){
    char name[] = "HELLO WORLD";

    for(int i = 0; name[i] != '\0'; i++){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] += 32;
        }

        printf("%c", name[i]);
    }

    return 0;
}