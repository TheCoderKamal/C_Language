// Write a Program to create a menu-driven program for Telecom call service conversation using nested switch

#include<stdio.h>
int main(){
    int choice, choice1;

    printf("\n");
    printf("Enter 1 for English\n");
    printf("Enter 2 for Hindi\n");
    printf("Enter 3 for Gujarati\n");
    printf("Enter a choice : ");
    scanf("%d", &choice);
    printf("\n");

    switch(choice){
        case 1:
            printf("Enter 1 for Internet Recharge\n");
            printf("Enter 2 for Top-up Recharge\n");
            printf("Enter 3 for Special Recharge\n");
            printf("Enter your choice : ");
            scanf("%d", &choice1);
            printf("\n");
            break;
        case 2:
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice : ");
            scanf("%d", &choice1);
            printf("\n");
            break;
        case 3:
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice : ");
            scanf("%d", &choice1);
            printf("\n");
            break;
        default:
            printf("Invalid Choice");
            printf("\n");
            break;
    }

    switch (choice1)
    {
        case 1:
            choice == 1 ? printf("You have successfully done Internet Recharge.\n") : choice == 2 ? printf("Aapne safaltapurvak Internet Recharge kar liya he.\n") : printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
            break;
        case 2:
            choice == 1 ? printf("You have successfully done Top-up Recharge.\n") : choice == 2 ? printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n") : printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
            break;
        case 3:
            choice == 1 ? printf("You have successfully done Special Recharge.\n") : choice == 2 ? printf("Aapne safaltapurvak Special Recharge kar liya he.\n") : printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
            break;
        default:
            printf("Invalid choice\n");
    }


    return 0;
}