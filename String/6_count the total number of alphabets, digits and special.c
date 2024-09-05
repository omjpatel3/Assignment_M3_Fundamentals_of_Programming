#include <stdio.h>

main() {
    char str[100];
    int i = 0;
    int alphabets = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i]) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            specials++;
        }
        i++;
    }

    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", specials);
}
