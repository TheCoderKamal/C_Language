#include<stdio.h>
int main(){
    int count = 1;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%-4d", count++);
        }
        printf("\n");
        
    }
    
    return 0;
}
