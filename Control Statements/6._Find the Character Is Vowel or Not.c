#include<stdio.h>
main()
{
    char ch;

    printf("Enter any character :   ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='A')
        printf("The character is a vowel . ");
    else if(ch=='e' || ch=='E')
        printf("The character is a vowel . ");
    else if(ch=='i' || ch=='I')
        printf("The character is a vowel . ");
    else if(ch=='o' || ch=='O')
        printf("The character is a vowel . ");
    else if(ch=='u' || ch=='U')
        printf("The character is a vowel . ");

    else
        printf("The character is a consonant .");

}
