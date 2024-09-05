//Write a C program to read the value of an integer m and display the value of m is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0


#include<stdio.h>
main()
{
    int m;

    printf("\n\n\t Enter any integer :  ");
    scanf("%d",&m);

    if(m>0)
        printf("\n\n\t The value of m is 1");
    else if(m<0)
        printf("\n\n\t The value of m is -1");
    else
        printf("\n\n\t The value of m is 0");
}
