#include <stdio.h>

void selectionSort(int arr[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        int index = i;

        for (int j = i + 1; j < n; j++) {
            if (ascending) {
                if (arr[j] < arr[index])
                    index = j;
            } else {
                if (arr[j] > arr[index])
                    index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
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

    selectionSort(a, 5, 1);
    selectionSort(b, 5, 0);

    printf("Ascending: ");
    printArray(a, 5);

    printf("Descending: ");
    printArray(b, 5);

    return 0;
}