#include<stdio.h>
main()
{
    int n,fact=1,i=1;

    printf("\n\n\t Enter any number :  ");
    scanf("%d",&n);

    while(i<=n)
    {
        fact*=i;
        i++;
    }

    printf("\n\n\t The factorial of the given number is %d . ",fact);
}
