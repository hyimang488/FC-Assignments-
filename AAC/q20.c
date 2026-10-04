#include <stdio.h>

void countSort(int arr[], int n, int ascending) {
    int max = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    int count[max + 1];

    for (int i = 0; i <= max; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;

    if (ascending) {
        for (int i = 0; i <= max; i++)
            while (count[i]-- > 0)
                arr[index++] = i;
    } else {
        for (int i = max; i >= 0; i--)
            while (count[i]-- > 0)
                arr[index++] = i;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main() {
    int a[] = {4, 2, 2, 8, 3, 3, 1};
    int b[] = {4, 2, 2, 8, 3, 3, 1};

    int n = 7;

    countSort(a, n, 1);
    countSort(b, n, 0);

    printf("Ascending: ");
    printArray(a, n);

    printf("Descending: ");
    printArray(b, n);

    return 0;
}