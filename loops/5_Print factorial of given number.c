#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("\n\n\t Enter any number to find factorial :  ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }

    printf("\n\n\t The factorial of the given number is %d",fact);
}
