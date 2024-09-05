#include <stdio.h>
int main()
{
    char str[100];
    int freq[128], max,ascii,i=0;

    printf("Enter any string: ");
    gets(str);

    for(i=0; i<128; i++)
    {
        freq[i] = 0;
    }
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
    max = 0;
    for(i=0; i<128; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }
    printf("Maximum occurring character is '%c' = %d times.", max, freq[max]);
}
