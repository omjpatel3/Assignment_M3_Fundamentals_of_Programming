#include<stdio.h>
#include<string.h>
main()
{
    char str1[100],str2[100];

    printf("\n\n\tEnter any string :  ");
    gets(str1);

    strcpy(str2,str1);

    printf("\n\n\tThe given string2 after copying is : %s ",str2);
    printf("\n\tThe given string1 after copying is : %s ",str1);
}
