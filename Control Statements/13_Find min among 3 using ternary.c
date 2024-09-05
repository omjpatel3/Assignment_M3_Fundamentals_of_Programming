#include<stdio.h>
main()
{
    int n1,n2,n3,min;

    printf("\n\n\tEnter first number :  ");
    scanf("%d",&n1);
    printf("\n\n\tEnter first number :  ");
    scanf("%d",&n2);
    printf("\n\n\tEnter first number :  ");
    scanf("%d",&n3);

    max = (n1 < n2) ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);

    printf("Minimum number among %d, %d and %d is %d.",n1, n2, n3, min);

}
