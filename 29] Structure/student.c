/*
    Write a Program to create Student Record System for n students using structure. Consider the below-mentioned attributes in the Student structure:
        - stu_id
        - stu_name
        - stu_age
        - stu_course
        - stu_city
        - stu_standard
        - stu_school
*/

#include<stdio.h>
#include<string.h>

struct student{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
}stu[100];

int main(){
    int number;

    printf("Enter the number of forms you want to fill : ");
    scanf("%d",&number);

    for (int i = 0; i < number; i++){
        printf("\n");
        printf("Enter the details of student %d\n",i+1);
        printf("Enter the student id : ");
        scanf("%d",&stu[i].stu_id);
        printf("Enter the student name : ");
        scanf("%s",&stu[i].stu_name);
        printf("Enter the student age : ");
        scanf("%d",&stu[i].stu_age);
        printf("Enter the student course : ");
        scanf("%s",&stu[i].stu_course);
        printf("Enter the student city : ");
        scanf("%s",&stu[i].stu_city);
        printf("Enter the student standard : ");
        scanf("%d",&stu[i].stu_standard);
        printf("Enter the student school : ");
        scanf("%s",&stu[i].stu_school);
        printf("\n");
    }

    for (int i = 0; i < number; i++){
        printf("\n");
        printf("Details of student %d\n",i+1);
        printf("Student id : %d\n",stu[i].stu_id);
        printf("Student name : %s\n",stu[i].stu_name);
        printf("Student age : %d\n",stu[i].stu_age);
        printf("Student course : %s\n",stu[i].stu_course);
        printf("Student city : %s\n",stu[i].stu_city);
        printf("Student standard : %d\n",stu[i].stu_standard);
        printf("Student school : %s\n",stu[i].stu_school);
        printf("\n");
    }

    return 0;
}