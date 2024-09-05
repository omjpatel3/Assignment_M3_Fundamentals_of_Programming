#include <stdio.h>

main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    if (str[0] != '\0' && str[0] != ' ') {
        count++;
    }

    printf("Total number of words: %d\n", count);
}
