#include<stdio.h>
#include<string.h>
main()
{

    char str[100];
    int vowel_ctr=0,consonant_ctr=0;

    printf("\n\n\tEnter any string :  ");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'   || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
        {
            vowel_ctr++;
        }
        else
        {
            consonant_ctr++;
        }
    }

    printf("\n\n\tThe given string is : %s",str);
    printf("\n\n\tTotal vowels are %d ",vowel_ctr);
    printf("\n\n\tTotal consonants are %d ",consonant_ctr);
}
