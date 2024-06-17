// Find maximum value by returning pointer variable.

#include<stdio.h>

int max(int *a, int *b);
int main(){

    int a, b;

    printf("Enter first numbers: ");
    scanf("%d", &a);

    printf("Enter second numbers: ");
    scanf("%d", &b);

    int ans = max(&a, &b);

    printf("Max values: %d", ans);

    return 0;
}

int max(int *a, int *b){
    if (*a > *b){
        return *a;
    }
    else{
        return *b;
    }
    
}