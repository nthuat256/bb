#include <stdio.h>
int main() {
    char name[50];
    int age;
    printf("Nhap ten: ");
    gets(name);
    printf("Nhap tuoi: ");
    scanf("%d", &age);
    printf("Ten ban la %s, ban %d tuoi.\n", name, age);
    return 0;
}

