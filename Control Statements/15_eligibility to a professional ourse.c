/*Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 -------------------------------------
*/

#include<stdio.h>
main()
{
    int math,phy,chem,total;

    printf("\n\n\t Enter the marks of Maths :  ");
    scanf("%d",&math);

    printf("\n\n\t Enter the marks of Physics :  ");
    scanf("%d",&phy);

    printf("\n\n\t Enter the marks of Chemistry :  ");
    scanf("%d",&chem);

    total=phy+chem+math;

    if(math>=65 && phy>=55 && math>=50 && total>=190)
    {
        printf("\n\n\t The student is for the eligible . ");
    }
    else
        printf("\n\n\t The student is not eligible for the course . ");

}
