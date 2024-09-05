#include<stdio.h>
main()
{
    int num;

    printf("\n\n\tEnter any number :  ");
    scanf("%d",&num);

    if(num>0)
        printf("\n\n\t The given number is positive .");
    else
        printf("\n\n\t The given number is negative .");
}
