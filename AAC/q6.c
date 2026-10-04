#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}