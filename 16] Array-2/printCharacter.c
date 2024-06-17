// Q4. Take input from user for array elements prints it's  characters.

#include<stdio.h>
int main(){
    int size;

    printf("Enter size of array : ");
    scanf("%d", &size);

    char arr[size];

    for (int i = 0; i < size; i++){
        printf("Enter the character : ");
        scanf(" %c", &arr[i]);
    }

    for (int i = 0; i < size; i++){
        printf("character arr[%d] : %c\n", i, arr[i]);
    }

    return 0;
}