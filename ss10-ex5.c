#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    int low = 0, high = n - 1, mid, result = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;       
        if (arr[mid] == x) {
            result = mid;
            break;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (result != -1) {
        printf("So %d duoc tim thay tai vi tri %d la .\n", x, result);
    } else {
        printf("Khong tim thay so %d trong mang.\n", x);
    }
    return 0;
}

