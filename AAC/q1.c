#include <stdio.h>

long long factIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

long long factRecursive(int n) {
    if (n <= 1)
        return 1;
    return n * factRecursive(n - 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Iterative Factorial = %lld\n", factIterative(n));
    printf("Recursive Factorial = %lld\n", factRecursive(n));

    return 0;
}