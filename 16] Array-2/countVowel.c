// Q3. Take input from user for array elements prints it's count of vowel.

#include<stdio.h>
int main(){
    int size, count = 0;

    printf("Enter size of array : ");
    scanf("%d", &size);

    char arr[size];

    for (int i = 0; i < size; i++){
        printf("Enter the character : ");
        scanf(" %c", &arr[i]);
    }

    for (int i = 0; i < size; i++){
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U'){
            count++;
        }
    }

    printf("Count of vowels : %d", count);

    return 0;
}