#include <stdio.h>

void insertionSort(int arr[], int n, int ascending) {
    for (int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i - 1;

        if (ascending) {
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
        } else {
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main() {
    int a[] = {5, 2, 8, 1, 4};
    int b[] = {5, 2, 8, 1, 4};

    insertionSort(a, 5, 1);
    insertionSort(b, 5, 0);

    printf("Ascending: ");
    printArray(a, 5);

    printf("Descending: ");
    printArray(b, 5);

    return 0;
}