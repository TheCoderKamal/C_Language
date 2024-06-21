#include<stdio.h>
int main(){

    for (int i = 10; i > 5; i--){
        for (int j = 0; j < 10 - (i - 1); j++){
            printf("%d ", i * i);
        }
        printf("\n");
    }
        return 0;
}