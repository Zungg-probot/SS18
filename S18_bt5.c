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

    int timID;
    int flag = 1;
    printf("Nhap id sinh vien can sua: ");
    scanf("%d", &timID);
    getchar();

    for (int i = 0; i < 5; i++){
        if (sinhVien[i].id == timID){
            flag = 0;
            printf("Sinh vien tim thay: \n");
            printf("Ten: %s\n", sinhVien[i].name);
            printf("Tuoi: %d\n", sinhVien[i].age);
            printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
            printf("Nhap ten moi sinh vien: ");
            fgets(sinhVien[i].name, sizeof(sinhVien[i].name), stdin);
            printf("Nhap tuoi moi sinh vien: ");
            scanf("%d", &sinhVien[i].age);
            getchar();

            break;
        }
    }

    if (flag){
        printf("Khong tim thay sinh vien voi id %d\n", timID);
    }

    printf("\nThong tin cac sinh vien sau khi chinh sua: \n");
    for (int i = 0; i < 5; i++){
        printf("Sinh vien %d:\n", sinhVien[i].id);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

