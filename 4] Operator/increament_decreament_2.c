// 6Write a C program that demonstrates the use of increment (++) and decrement (--) operators. Start with a variable at 5, decrement it thrice.

#include <stdio.h>

int main() {
    int number = 5;

    printf("Starting value: %d\n", number);

    number--;
    number--;
    number--;

    printf("After decrementing thrice: %d\n", number);

    return 0;
}
