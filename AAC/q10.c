#include <stdio.h>

int main() {
    int arr[] = {20, 45, 11, 80, 32};
    int n = 5;

    int min = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    printf("Minimum = %d\n", min);

    return 0;
}