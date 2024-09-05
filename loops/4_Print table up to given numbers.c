#include<stdio.h>
int main()
{

    int n1;

    printf("Enter the number :  ");
    scanf("%d",&n1);

    for(int i=1;i<=10;i++)
    {
        printf("\n\n\t %d * %d  =  %d",n1,i,n1*i);
    }
}
