#include <stdio.h>
int search(int *arr, int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return i; 
        }
    }
    return 0; 
}

int main() {
    int array[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]); 
    int n = 7;
    int vitri = search(array, size, n);
    if (vitri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", n, vitri);
    } 
    return 0;
}

