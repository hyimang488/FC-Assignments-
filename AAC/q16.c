#include <stdio.h>

int sumIterative(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++)
        sum += i;

    return sum;
}

int sumRecursive(int n) {
    if (n == 0)
        return 0;

    return n + sumRecursive(n - 1);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Iterative Sum = %d\n",
           sumIterative(n));

    printf("Recursive Sum = %d\n",
           sumRecursive(n));

    return 0;
}