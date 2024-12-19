#include <stdio.h>
#include <string.h>

int main() {
    struct SinhVien {
        char name[50];
        int age;
        char phoneNumber[20];
    };
    
    struct SinhVien sinhvien01 = {"Tran Dang Viet", 18, "0981658826"};
    
    printf("Thong tin sinh vien:\n");
    printf("Ho va ten: %s\n", sinhvien01.name);
    printf("Tuoi: %d\n", sinhvien01.age);
    printf("Sdt: %s\n", sinhvien01.phoneNumber);

    return 0;
}
