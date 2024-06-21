#include<stdio.h>

struct Employee{
    int room_quantity;
    int established_year;
    char city[20];
} s[100];
int main(){

    int size;

    printf("Enter the number of forms you want : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the details of Student - %d\n\n", i + 1);
        printf("Enter the Room Quantity do you want : ");
        scanf("%d", &s[i].room_quantity);

        printf("Enter the Established year : ");
        scanf("%d", &s[i].established_year);

        printf("Enter the city : ");
        scanf("%s", &s[i].city);
    }

    for (int i = 0; i < size; i++)
    {
        printf("\nDetails of Student - %d\n\n", i + 1);
        printf("Room Quantity : %d\n", s[i].room_quantity);

        printf("Established year : %d\n", s[i].established_year);

        printf("City : %s\n\n", s[i].city);
    }

    return 0;
}