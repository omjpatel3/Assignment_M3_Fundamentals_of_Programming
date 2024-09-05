//12.Program of Armstrong Number in C Using For Loop & While Loop

//using while loop
//153

/*#include<stdio.h>
main()
{
    int n,rem,sum=0;



    printf("\n\n\tEnter any number :  ");
    scanf("%d",&n);
    int temp = n;

    while(n>0)
    {
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;

    }

    if(sum==temp)
        printf("\n\n\tThe number is armstrong number . ");
    else
        printf("\n\n\tThe given number is not an armstrong number . ");
}
*/

#include<stdio.h>
main()
{
    int n,rem,sum=0;



    printf("\n\n\tEnter any number :  ");
    scanf("%d",&n);
    int temp = n;


    /*while(n>0)
    {
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;

    }*/

    for(int i=0;n>0;i++)
    {
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }

    if(sum==temp)
        printf("\n\n\tThe number is armstrong number . ");
    else
        printf("\n\n\tThe given number is not an armstrong number . ");
}
