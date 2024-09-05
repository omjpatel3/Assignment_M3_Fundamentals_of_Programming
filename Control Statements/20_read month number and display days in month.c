//Write a program in C to read any Month Number in integer and display the number of days for this month.
#include<stdio.h>
main()
{
    int month_no;

    printf("\n\n\tEnter the month number :  ");
    scanf("%d",&month_no);

    switch(month_no)
    {

        case 1: printf("\n\n\t There are 31 days in this month . ");
        break;
        case 2: printf("\n\n\t There are 28/29 days in this month . ");
        break;
        case 3: printf("\n\n\t There are 31 days in this month . ");
        break;
        case 4: printf("\n\n\t There are 30 days in this month . ");
        break;
        case 5: printf("\n\n\t There are 31 days in this month . ");
        break;
        case 6: printf("\n\n\t There are 30 days in this month . ");
        break;
        case 7: printf("\n\n\t There are 31 days in this month . ");
        break;
        case 8: printf("\n\n\t There are 31 days in this month . ");
        break;
        case 9: printf("\n\n\t There are 30 days in this month . ");
        break;
        case 10: printf("\n\n\t There are 31 days in this month . ");
        break;
        case 11: printf("\n\n\t There are 30 days in this month . ");
        break;
        case 12: printf("\n\n\t There are 31 days in this month . ");
        break;
        default: printf("\n\n\t Invalid month number . Please enter between 1 and 12");

    }
}
