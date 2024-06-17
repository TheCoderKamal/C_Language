#include<stdio.h>
int main(){
    for (char row = 'A'; row <= 'E'; row++)
    {
        for (char col = 'A'; col <= row; col++)
        {
            printf("%c ",col);
        }
        printf("\n");
        
    }
    
    return 0;
}