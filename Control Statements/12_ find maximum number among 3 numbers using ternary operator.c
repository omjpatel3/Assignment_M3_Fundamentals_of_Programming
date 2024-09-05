//12.WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
main()
{
    int n1,n2,n3,max;

    printf("\n\n\tEnter first number :  ");
    scanf("%d",&n1);
    printf("\n\n\tEnter first number :  ");
    scanf("%d",&n2);
    printf("\n\n\tEnter first number :  ");
    scanf("%d",&n3);

    max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

    printf("Maximum number among %d, %d and %d is %d.",n1, n2, n3, max);

}
