//Simple calculator

#include<stdio.h>
int main()
{
    int a,b,ch,ans;

    printf("Enter first number :  ");
    scanf("%d" , &a);

    printf("Enter second number :  ");
    scanf("%d",&b);

    printf("\n\n\tEnter 1 for Addition :  ");
    printf("\n\n\tEnter 2 for Subtraction :  ");
    printf("\n\n\tEnter 3 for Multiplication :  ");
    printf("\n\n\tEnter 4 for Division :  ");
    printf("\n\n\tEnter 5 for Modulo :  ");
    printf("\n\n\tEnter 6 for Exit :  ");

    scanf("%d",&ch);

    if(ch==1)
        printf("\n answer is %d ",a+b);
    else if(ch==2)
        printf("answer is %d ",a-b);
    else if(ch==3)
        printf("answer is %d ",a*b);
    else if(ch==4)
        printf("answer is %d ",a/b);
    else if(ch==5)
        printf("answer is %d ",a%b);
    else
        printf("invalid choice");

}
