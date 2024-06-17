#include<stdio.h>
int main(){
    float first_angle, second_angle, third_angle;

    printf("Enter the value of first angle : ");
    scanf("%f",&first_angle);

    printf("Enter the value of second angle : ");
    scanf("%f",&second_angle);

    third_angle = 180 - first_angle - second_angle;

    printf("The third anglr : %f",third_angle);
    return 0;
}