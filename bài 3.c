#include <stdio.h>
int main() {
    int n, i, sum = 0;
    int arr[100];
    printf("Nhap so luong phan tu trong day: ");
    scanf("%d", &n);
    printf("Nhap cac so: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    printf("Tong cac so le trong day la: %d\n", sum);
    return 0;
}

