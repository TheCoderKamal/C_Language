#include <stdio.h>
#include <string.h> 

int main(){
    char str[100];
    int counted[256] = { 0 }; 

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (!counted[str[i]]) {
            int count = 0;
            for (int j = 0; j < length; j++) {
                if (str[i] == str[j]) {
                    count++;
                }
            }
            counted[str[i]] = 1;
            printf("%c = %d\n", str[i], count);
        }
    }
    return 0;
}
