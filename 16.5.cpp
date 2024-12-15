#include <stdio.h>
void update(int *arr, int size, int n, int vitri);
int main() {
 
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 8;  
    int vitri = 2;   
    update(arr, size, n, vitri);
    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void update(int *arr, int size, int n, int vitri) {
    if (vitri < 0 || vitri >= size) {
        printf("Vi tri khong hop le\n");
        return;
    }
    arr[vitri-1] = n;
}


