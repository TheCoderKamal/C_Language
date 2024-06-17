// Write a Program to check whether a string is a palindrome or not without using string functions.

#include<stdio.h>
 int main(){

    char str[100];
    int length = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", &str);

    while (str[length] != '\0'){
        length++;
    }

    for(int i = 0; i <= length / 2; i++){
        if(str[i] != str[length - i - 1]){
            flag  = 1;
            break;
        }
    }

    if(flag == 0){
        printf("String is palinmdrome.\n");
    }
    else{
        printf("String isn't palinmdrome.\n");

    }

    return 0;
}