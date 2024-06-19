#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile;
    FILE *destinationFile;
    char buffer[256];

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE; 
    }

    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile); 
        return EXIT_FAILURE; 
    }

    while (fgets(buffer, sizeof(buffer), sourceFile) != NULL) {
        fputs(buffer, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return EXIT_SUCCESS; 
}
