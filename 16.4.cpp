#include <stdio.h>

void printArray(int *arr, int size);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Cac phan tu trong mang la:\n");
    printArray(array, size);
    return 0;
}
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu vi tri %d: %d\n", i, *(arr + i));
    }
}

