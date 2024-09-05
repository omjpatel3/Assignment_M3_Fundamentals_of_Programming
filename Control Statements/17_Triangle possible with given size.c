//17.Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
main()
{
    int a1,a2,a3,sum;

    printf("\n\n\t Enter the value of the angle 1 :  ");
    scanf("%d",&a1);
    printf("\n\n\t Enter the value of the angle 2 :  ");
    scanf("%d",&a2);
    printf("\n\n\t Enter the value of the angle 3 :  ");
    scanf("%d",&a3);

    sum=a1+a2+a3;

    if(sum==180)
        printf("\n\n\tYou can make triangle with given angle values . ");
    else
        printf("\n\n\tYou can not make triangle with given angle values . ");
}
