//eg 1562 -> max is 6
#include<stdio.h>
#include<math.h>

int main()
{
    int n ,sum=0;



    printf("Enter any number :  ");
    scanf("%d",&n);

    sum+=n%10;

    while(n>=10)
    {
        n/=10;
    }
    sum+=n;

    printf("The sum of   the given number is %d",sum);
}


