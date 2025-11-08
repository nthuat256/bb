#include <stdio.h>
int main() {
    int choice;
    float a, b;
    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);
    while (1) {
        printf("\n========Menu========\n");
        printf("1. Tinh tong hai so\n");
        printf("2. Tinh hieu hai so\n");
        printf("3. Tinh tich hai so\n");
        printf("4. Thoat\n");
        printf("\n=====================\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);
    switch (choice) {
    	case 1:
                printf("Tong hai so la: %.2f\n", a + b);
                break;
            case 2:
                printf("Hieu hai so la: %.2f\n", a - b);
                break;
            case 3:
                printf("Tich hai so la: %.2f\n", a * b);
                break;
            case 4:
            	printf("chuong trinh ket thuc!");
            	return 0;
            default:
                printf("Lua chon khong hop le!\n");
                break;
	}
}
}
