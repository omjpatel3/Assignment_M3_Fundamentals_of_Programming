//eg 1562 -> max is 6
#include<stdio.h>
#include<math.h>

int main()
{
    int n ,maxd=0,cur;



    printf("Enter any number :  ");
    scanf("%d",&n);

    while(n>0)
    {
        cur=n%10;
        if(cur>maxd)
            maxd=cur;

        n/=10;

    }

    printf("The maximum digit in the number is %d",maxd);
}

