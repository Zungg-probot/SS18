#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[100];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien sinhVien[50] = {
        {1, "Nguyen Gia Bao", 20, "0123456789"},
        {2, "Le Van A", 21, "0987654321"},
        {3, "Le Minh Son", 22, "0912345678"},
        {4, "Pham Lan Anh", 20, "0934567890"},
        {5, "Hoang Van B", 23, "0976543210"}
    };

    int flag = 5;
    struct SinhVien newSinhVien;
    printf("Nhap thong tin sinh vien can them:\n");
    newSinhVien.id = flag + 1;
    printf("Nhap ten sinh vien: ");
    fgets(newSinhVien.name, sizeof(newSinhVien.name), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newSinhVien.age);
    getchar();
    printf("Nhap so dien thoai sinh vien: ");
    fgets(newSinhVien.phoneNumber, sizeof(newSinhVien.phoneNumber), stdin);


    sinhVien[flag] = newSinhVien;
    flag++;

    printf("\nThong tin toan bo sinh vien sau khi them:\n");
    for(int i = 0; i < flag; i++){
        printf("Sinh vien %d:\n", sinhVien[i].id);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

