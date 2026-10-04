#include <stdio.h>

int isPrime(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int nthPrimeIterative(int n) {
    int count = 0, number = 1;

    while (count < n) {
        number++;

        if (isPrime(number))
            count++;
    }

    return number;
}

int nthPrimeRecursive(int current, int count, int n) {
    if (count == n)
        return current - 1;

    if (isPrime(current))
        count++;

    return nthPrimeRecursive(current + 1, count, n);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Iterative nth Prime = %d\n",
           nthPrimeIterative(n));

    printf("Recursive nth Prime = %d\n",
           nthPrimeRecursive(2, 0, n));

    return 0;
}