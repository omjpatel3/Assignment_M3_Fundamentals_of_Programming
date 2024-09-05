#include<stdio.h>
main()
{
    int marks;

    printf("Enter the marks :  ");
    scanf("%d" , &marks);

    if(marks>=40)
        printf("The student is passed . ");
    else
        printf("The student is failed . ");
}
