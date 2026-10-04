#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int palindrome = 1;

    printf("Enter string: ");
    scanf("%99s", str);

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}