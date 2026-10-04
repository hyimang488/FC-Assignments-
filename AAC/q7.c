#include <stdio.h>

int sequentialIterative(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return -1;
}

int sequentialRecursive(int arr[], int n,
                        int key, int index) {
    if (index == n)
        return -1;

    if (arr[index] == key)
        return index;

    return sequentialRecursive(arr, n,
                               key, index + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;

    printf("Enter number to search: ");
    scanf("%d", &key);

    int result1 = sequentialIterative(arr, n, key);
    int result2 = sequentialRecursive(arr, n, key, 0);

    printf("Iterative index = %d\n", result1);
    printf("Recursive index = %d\n", result2);

    return 0;
}