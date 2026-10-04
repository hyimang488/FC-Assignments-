#include <stdio.h>

int binaryIterative(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int binaryRecursive(int arr[], int low,
                    int high, int key) {

    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] < key)
        return binaryRecursive(
            arr, mid + 1, high, key
        );

    return binaryRecursive(
        arr, low, mid - 1, key
    );
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int key;

    printf("Enter number to search: ");
    scanf("%d", &key);

    printf("Iterative index = %d\n",
           binaryIterative(arr, n, key));

    printf("Recursive index = %d\n",
           binaryRecursive(arr, 0,
                           n - 1, key));

    return 0;
}