#include <stdio.h>
int main() {
    int so;
    int dem = 0;
    int tong = 0;
    do {
        printf("Nhap so (nhap 0 de dung): ");
        scanf("%d", &so);
        if (so != 0) {
            tong = tong + so;
            dem = dem + 1;
        }
    } while (so != 0);
    if (dem > 0) {
        float trungBinh = (float)tong / dem;
        printf("Tong: %d\n", tong);
        printf("Trung binh: %.1f\n", trungBinh);
    } else {
        printf("Khong co so nao duoc nhap!\n");
    }
    return 0;
}

