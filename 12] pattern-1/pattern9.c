#include<stdio.h>
int main(){
    int changer = 70;
    for (char row = 65; row <= 70; row++)
    {
        
        for (int col = changer--; col >= 65; col--)
        {
            printf("%c ",col);
        }
        printf("\n");
        
    }
    
    return 0;
}
