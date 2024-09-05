//compound interest

#include<stdio.h>
int main()
{
    int p,t;
    float r,compound;

    printf("\n\n\t Enter the principle amount :  ");
    scanf("%d",&p);



    printf("\n\n\t Enter the total amount of time :  ");
    scanf("%d",&t);

    printf("\n\n\t Enter the rate of interest in percent:  ");
    scanf("%f",&r);

    compound=p*pow((1+(r/100)),(t)) ;
    printf("%.2f",compound);

}
