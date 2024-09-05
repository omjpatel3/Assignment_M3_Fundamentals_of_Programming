//14.WAP to find the largest of three numbers.
#include<stdio.h>
main()
{
    int n1,n2,n3;

    printf("\n\n\t Enter first number :  ");
    scanf("%d",&n1);
    printf("\n\n\t Enter second number :  ");
    scanf("%d",&n2);
    printf("\n\n\t Enter third number :  ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3)
        printf("\n\n\t %d is the largest . ",n1);
    else if(n2>n3)
        printf("\n\n\t %d is the largest . ",n2);
    else
        printf("\n\n\t %d is the largest . ",n3);

}
