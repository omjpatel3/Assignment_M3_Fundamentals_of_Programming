/*19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer.

upto 350                                1.20
350 and above but less than 600         1.50
600 and above but less than 800         1.80
800 and above                           2.00

*/

#include<stdio.h>
main()
{
    int min=256;
    long unit,custID;
    float bill,sur,n_bill;
    char name[25];

    printf("\n\n\t Enter your customer ID :  ");
    scanf("%ld",&custID);
    printf("\n\n\t Enter your name :  ");
    scanf("%s",&name);
    printf("\n\n\t Enter total units consumed :  ");
    scanf("%ld",&unit);

    if(unit>=800){
        bill=(unit*2)+min;
    }
    else if(unit>=600){
        bill=(unit*1.80)+min;
    }
    else if(unit>=350){
        bill=(unit*1.50)+min;
    }
    else {
        bill=(unit*1.20)+min;
    }

    if(bill>=800){
        sur=bill*18/100;
        n_bill=bill +sur;
        printf("\n\n\t Your bill is more than 800 rupees so 18 %% surcharge rupees %f is added . ",sur);

    }



    printf("\n\n\t your total bill is %.2f + %.2f = %.2f",bill,sur,n_bill);

}
