#include<stdio.h>
int main(){
    for (int row = 1; row <= 10; row++)
    {
        for (int col = 10; col >= row; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
        
    }
    
    return 0;
}