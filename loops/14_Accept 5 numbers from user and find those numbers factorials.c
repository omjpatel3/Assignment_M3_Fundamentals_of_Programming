//accept 5 numbers and find factorials
#include<stdio.h>
main()
{
    int n,fact=1,i=1,ctr;

    for(ctr=1;ctr<=5;ctr++)
    {
        printf("\n\n\t Enter  number %d :  ",ctr);
        scanf("%d",&n);

        while(i<=n)
        {
            fact*=i;
            i++;
        }

        printf("\n\n\t The factorial of the given number is %d . ",fact);
    }

    }
