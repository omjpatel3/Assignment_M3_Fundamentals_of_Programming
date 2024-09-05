//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
    int n;
    long int sum=0;

    printf("\n\n\t Enter any number for printing series :  ");
    scanf("%d",&n);

    printf("\n\n\t The given series is :  \n");

    for(int i=1;i<n;i++)
    {
        printf("(%d * %d) +",i,i);
        sum+=i*i;
    }
    sum+=(n*n);
    printf("(%d * %d)",n,n);

    printf("\n\n\t The sum of this series is %d . ",sum);
}

