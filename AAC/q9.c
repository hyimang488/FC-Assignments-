#include <stdio.h>

int main() {
    int arr[] = {20, 45, 11, 80, 32};
    int n = 5;

    int max = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Maximum = %d\n", max);

    return 0;
}