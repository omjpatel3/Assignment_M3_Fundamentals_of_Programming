#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], smallest[50], largest[50];
    int i = 0, j = 0, len, min_len = 200, max_len = 0;
    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    while (i <= len) {
        if (str[i] != ' ' && str[i] != '\0' ) {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (strlen(word) > 0) {
                if (strlen(word) < min_len) {
                    min_len = strlen(word);
                    strcpy(smallest, word);
                }
                if (strlen(word) > max_len) {
                    max_len = strlen(word);
                    strcpy(largest, word);
                }
            }
            j = 0;
        }
        i++;
    }
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
}
