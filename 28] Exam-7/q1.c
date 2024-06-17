#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    char *ptr = str;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("The length of the string is: %d\n", length); 

    return 0;
}
