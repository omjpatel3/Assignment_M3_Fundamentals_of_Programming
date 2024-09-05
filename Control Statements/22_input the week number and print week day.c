//WAP to input the week number and print week day.

/**
 * C program to print day name of week
 */

#include <stdio.h>

int main()
{
    int weekDay;

    /* Input week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &weekDay);


    if(weekDay == 1)
    {
        printf("\n\n\t The day %d of the week is Monday",weekDay);
    }
    else if(weekDay == 2)
    {
        printf("\n\n\t The day %d of the week is Tuesday",weekDay);
    }
    else if(weekDay == 3)
    {
        printf("\n\n\t The day %d of the week is Wednesday",weekDay);
    }
    else if(weekDay == 4)
    {
        printf("\n\n\t The day %d of the week is Thursday",weekDay);
    }
    else if(weekDay == 5)
    {
        printf("\n\n\t The day %d of the week is Friday",weekDay);
    }
    else if(weekDay == 6)
    {
        printf("\n\n\t The day %d of the week is Saturday",weekDay);
    }
    else if(weekDay == 7)
    {
        printf("\n\n\t The day %d of the week is Sunday",weekDay);
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}
