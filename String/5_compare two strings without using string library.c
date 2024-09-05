#include <stdio.h>

main() {
    char str1[100], str2[100];
    int i = 0;
    int areEqual = 1;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    while (str1[i] && str2[i]) {
        if (str1[i] != str2[i]) {
            areEqual = 0;
            break;
        }
        i++;
    }
    if (areEqual) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
}
