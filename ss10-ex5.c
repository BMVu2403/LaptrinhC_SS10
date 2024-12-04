#include<stdio.h>

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int BinarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) return mid; 
        if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1; 
}

int main() {
    int n, x;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    BubbleSort(arr, n);

    printf("Mang da sap xep: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Nhap so can tim: ");
    scanf("%d", &x);
    int result = BinarySearch(arr, n, x);

    if (result != -1)
        printf("Tim thay %d tai vi tri %d.\n", x, result);
    else
        printf("Khong tim thay %d trong mang.\n", x);

    return 0;
}

