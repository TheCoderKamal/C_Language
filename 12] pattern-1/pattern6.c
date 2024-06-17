#include<stdio.h>
int main(){
    for (int row = 4; row >= 1; row--)
    {
        for (int col = 4; col >= row; col--)
        {
            printf("%d ",row);
        }
        printf("\n");
        
    }
    
    return 0;
}