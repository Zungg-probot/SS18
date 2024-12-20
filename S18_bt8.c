#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[100];
    int age;
    char phoneNumber[20];
};

int main(){
    struct SinhVien sinhVien[50] = {
        {1, "Nguyen Thi Mai", 20, "0123456789"},
        {2, "Tran Minh Tu", 21, "0987654321"},
        {3, "Le Thanh Son", 22, "0912345678"},
        {4, "Pham Lan Anh", 20, "0934567890"},
        {5, "Hoang Bao Ngoc", 23, "0976543210"}
    };

    int flag = 5;
    struct SinhVien newSinhVien;
    int index;


    printf("Nhap ten sinh vien: ");
    fgets(newSinhVien.name, sizeof(newSinhVien.name), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newSinhVien.age);
    getchar();
    printf("Nhap so dien thoai sinh vien: ");
    fgets(newSinhVien.phoneNumber, sizeof(newSinhVien.phoneNumber), stdin);

    newSinhVien.id = flag + 1;
    printf("Nhap vi tri can chen: ");
    scanf("%d", &index);

    if (index < 0 || index > flag){
        printf("Vi tri chen khong hop le\n");
        return 1;
    }


    for(int i = flag;i > index;i--){
        sinhVien[i] = sinhVien[i-1];
    }


    sinhVien[index] = newSinhVien;
    flag++;

    printf("\nThong tin toan bo sinh vien sau khi chen:\n");
    for (int i = 0; i < flag; i++){
        printf("Sinh vien %d:\n", sinhVien[i].id);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

