// 7.Calculate the area of a circle given the radius (constant value for pi)

#include<stdio.h>
int main(){
    float radius;
    const float pi = 3.141592653589793;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = pi * radius * radius;

    printf("The area of the circle is: %f\n", area);
    return 0;
}

