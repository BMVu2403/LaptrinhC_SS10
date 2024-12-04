#include <stdio.h>

int main() {
    int n, x, count = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n], positions[n]; 

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[count++] = i; 
        }
    }

    if (count > 0) {
        printf("Tim thay %d tai cac vi tri: ", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
    } else {
        printf("Khong tim thay %d trong mang.", x);
    }

    return 0;
}

