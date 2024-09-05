//8. WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
main()
{
    int height;

    printf("\n\n\tEnter the height in centimeter:  ");
    scanf("%d" , &height);

    if(height>=210)
        printf("Your height is much high . ");
    else if(height>=180)
        printf("Your height is above average  . ");
    else if(height>=150)
        printf("Your height is common as others  . ");
    else
        printf("Your height is below average .");
}
