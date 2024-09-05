//Accept month number and display month name

#include <stdio.h>

main()
{
    int month;

    /* Input week number from user */
    printf("\n\n\tEnter month number (1-12): ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("\n\n\t The month %d of the year is January",month);
    }
    else if(month == 2)
    {
        printf("\n\n\t The month %d of the year is February",month);
    }
    else if(month == 3)
    {
        printf("\n\n\t The month %d of the year is March",month);
    }
    else if(month == 4)
    {
        printf("\n\n\t The month %d of the year is April",month);
    }
    else if(month == 5)
    {
        printf("\n\n\t The month %d of the year is May",month);
    }
    else if(month == 6)
    {
        printf("\n\n\t The month %d of the year is June",month);
    }
    else if(month == 7)
    {
        printf("\n\n\t The month %d of the year is July",month);
    }
    else if(month == 8)
    {
        printf("\n\n\t The month %d of the year is August",month);
    }
    else if(month == 9)
    {
        printf("\n\n\t The month %d of the year is September",month);
    }
    else if(month == 10)
    {
        printf("\n\n\t The month %d of the year is October",month);
    }
    else if(month == 11)
    {
        printf("\n\n\t The month %d of the year is November",month);
    }
    else if(month == 12)
    {
        printf("\n\n\t The month %d of the year is December",month);
    }
    else
    {
        printf("Invalid Input! Please enter month number between 1-12.");
    }

}
