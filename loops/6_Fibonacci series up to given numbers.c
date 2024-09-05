#include<stdio.h>
int main()
{
    int c,a=0,b=1,n;



    printf("Enter the number to print fibonacci series :  ");
    scanf("%d",&n);

    printf("\n\n\t %d %d",a,b);

    for(int i=1;i<n;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }



}
