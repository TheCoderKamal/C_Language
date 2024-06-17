// 4.Calculate the area of a rectangle, take input from user length and width:  print area.

#include<stdio.h>
int main(){
    float length, width;

    printf("Enter the length of the rectangle : ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle : ");
    scanf("%f", &width);

    printf("The area of the rectangle is : %f square units", length * width);
    return 0;
}