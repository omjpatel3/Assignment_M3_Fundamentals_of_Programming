#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0' ) {
        if (isalpha(str[i])) {
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0';

    printf("String with only alphabets: %s\n", result);
}
