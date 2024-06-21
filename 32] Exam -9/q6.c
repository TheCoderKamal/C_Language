#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50
#define MAX_ROLE_LENGTH 50

int main() {
    int N, i;
    char name[MAX_NAME_LENGTH];
    char role[MAX_ROLE_LENGTH];

    printf("Enter the number of employees: ");
    scanf("%d", &N);

    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", name);
        
        printf("Role: ");
        scanf("%s", role);
        
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", name);
        fprintf(file, "Role: %s\n\n", role);
    }

    fclose(file);

    printf("\nEmployee details have been written to data.txt\n");

    return 0;
}
