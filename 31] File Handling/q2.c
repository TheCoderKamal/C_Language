#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int i;

    file = fopen("divisible_by_3_and_5.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE; 
    }

    for (i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);

    printf("Numbers divisible by both 3 and 5 between 1 and 50 have been written to divisible_by_3_and_5.txt\n");

    return EXIT_SUCCESS; 
}
