//Accept the input month number and print number of days in that month.

#include <stdio.h>

main()
{
    int month;

    printf("\n\n\tEnter month number (1-12): ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("\n\n\t Days in month %d are 31",month);
    }
    else if(month == 2)
    {
        printf("\n\n\t Days in month %d are 28/29",month);
    }
    else if(month == 3)
    {
        printf("\n\n\t Days in month %d are 31",month);
    }
    else if(month == 4)
    {
        printf("\n\n\t Days in month %d are 30",month);
    }
    else if(month == 5)
    {
        printf("\n\n\t Days in month %d are 31",month);
    }
    else if(month == 6)
    {
        printf("\n\n\t Days in month %d are 30",month);
    }
    else if(month == 7)
    {
        printf("\n\n\t Days in month %d are 31",month);
    }
    else if(month == 8)
    {
        printf("\n\n\t Days in month %d are 31",month);
    }
    else if(month == 9)
    {
        printf("\n\n\t Days in month %d are 30",month);
    }
    else if(month == 10)
    {
        printf("\n\n\t Days in month %d are 31",month);
    }
    else if(month == 11)
    {
        printf("\n\n\t Days in month %d are 30",month);
    }
    else if(month == 12)
    {
        printf("\n\n\t Days in month %d are 31",month);
    }
    else
    {
        printf("Invalid Input! Please enter month number between 1-12.");
    }

}
