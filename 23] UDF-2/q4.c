// Find vowels in string using TSRS

#include<stdio.h>

int vowel(char str[100]){
    int count = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            count++;
        }
    }

    return count;
}
int main(){

    char str[100];
    printf("Enter a String : ");
    gets(str);

    printf("%d", vowel(str));
    return 0;
}