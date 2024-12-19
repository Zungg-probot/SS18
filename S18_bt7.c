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
        {1, "Nguyen Gia Bao", 20, "0123456789"},
        {2, "Le Van A", 21, "0987654321"},
        {3, "Le Minh Son", 22, "0912345678"},
        {4, "Pham Lan Anh", 20, "0934567890"},
        {5, "Hoang Van B", 23, "0976543210"}
    };

    int flag = 5;
    char nameDelete[100];
    int found = 1;

    printf("Nhap ten sinh vien can xoa: ");
    fgets(nameDelete, sizeof(nameDelete), stdin);
    nameDelete[strcspn(nameDelete, "\n")] = '\0';

    for(int i = 0; i < flag; i++){
        if (strcmp(sinhVien[i].name, nameDelete) == 0){
            found = 0;
            for(int j = i; j < flag - 1; j++){
                sinhVien[j] = sinhVien[j + 1];
            }
            flag--;
            break;
        }
    }

    if(found){
        printf("Khong tim thay sinh vien voi ten %s\n", nameDelete);
    }

    printf("\nThong tin toan bo sinh vien sau khi xoa:\n");
    for (int i = 0; i < flag; i++) {
        printf("Sinh vien %d:\n", sinhVien[i].id);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

