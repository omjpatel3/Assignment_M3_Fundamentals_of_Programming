#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char temp;
    int length, start, end;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    start = 0;
    end = length - 1;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
    printf("Reversed string: %s\n", str);

    return 0;
}

