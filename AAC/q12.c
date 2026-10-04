#include <stdio.h>

long long powerIterative(int x, int n) {
    long long result = 1;

    for (int i = 0; i < n; i++)
        result *= x;

    return result;
}

long long powerRecursive(int x, int n) {
    if (n == 0)
        return 1;

    return x * powerRecursive(x, n - 1);
}

int main() {
    int x, n;

    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    printf("Iterative = %lld\n",
           powerIterative(x, n));

    printf("Recursive = %lld\n",
           powerRecursive(x, n));

    return 0;
}