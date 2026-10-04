#include <stdio.h>

int main() {
    int n, temp, reverse = 0, digit;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    if (n == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}