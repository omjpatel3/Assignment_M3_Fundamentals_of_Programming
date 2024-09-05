#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    printf("Enter a sentence: ");
    if (gets(str) == NULL) {
        printf("please enter valid string.\n");
    }
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
    printf("Modified sentence: %s", str);
}
