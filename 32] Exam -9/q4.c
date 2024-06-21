#include<stdio.h>
int main(){
    int size;

    printf("Enter the size of an array : ");
    scanf("%d", &size);

    int arr[size];
    int *p;
    p = &arr;

    for (int i = 0; i < size; i++){
        printf("Enter the value of arr[%d] : ",i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++){
        printf("Square of a[%d] : %d\n", i, (*(p + i)) * (*(p + i)));
    }
        return 0;
}