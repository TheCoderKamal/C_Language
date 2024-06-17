// Write a Program to print leap years between two given numbers using a while loop.

#include<stdio.h>
int main(){
    int start_year;
    int end_year;

    printf("Enter the starting year : ");
    scanf("%d",&start_year);

    printf("Enter the ending year : ");
    scanf("%d",&end_year);

    while (start_year <= end_year)
    {
        if ((start_year % 4 == 0) && (start_year % 100 != 0 || start_year % 400 == 0))
        {
            printf("%d\n", start_year);
        }
        start_year++;
        }
    
    return 0;
}