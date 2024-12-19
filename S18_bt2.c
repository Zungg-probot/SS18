#include <stdio.h>

struct SinhVien {
    char name[100];
    int age;
    char phoneNumber[20];
};

int main(){
    struct SinhVien sv;

    printf("Nhap ten sinh vien: ");
    fgets(sv.name, sizeof(sv.name), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv.age);
    fflush(stdin);
    printf("Nhap so dien thoai sinh vien: ");
    fgets(sv.phoneNumber, sizeof(sv.phoneNumber), stdin);

    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s", sv.phoneNumber);

    return 0;
}
