#include <stdio.h>

void bubbleSort(int arr[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if ((ascending && arr[j] > arr[j + 1]) ||
                (!ascending && arr[j] < arr[j + 1])) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubbleSort(a, 5, 1);
    bubbleSort(b, 5, 0);

    printf("Ascending: ");
    printArray(a, 5);

    printf("Descending: ");
    printArray(b, 5);

    return 0;
}