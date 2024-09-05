//17.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
main()
{
    int n,i=0,eCount=0,oCount=0;

    while(i<5)
    {
        printf("\n\n\t Enter number %d :  ",i+1);
        scanf("%d",&n);

        if(n%2==0)
            eCount++;
        else
            oCount++;

        i++;

    }
    printf("\n\n\t There are %d Even numbers and %d Odd numbers . ",eCount,oCount);
}
