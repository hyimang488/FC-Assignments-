#include <stdio.h>

void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;

        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];

        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main() {
    int a[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int b[] = {170, 45, 75, 90, 802, 24, 2, 66};

    int n = 8;

    radixSort(a, n);

    radixSort(b, n);
    reverseArray(b, n);

    printf("Ascending: ");
    printArray(a, n);

    printf("Descending: ");
    printArray(b, n);

    return 0;
}