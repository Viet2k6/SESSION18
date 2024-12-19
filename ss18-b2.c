#include <stdio.h>
#include <string.h>

int main() {
    struct SinhVien {
        char name[50];
        int age;
        char phoneNumber[20];
    };
    
    struct SinhVien sinhvien01;
    
    printf("Moi nhap Ho ten: ");
    fgets(sinhvien01.name, sizeof(sinhvien01.name), stdin);
    sinhvien01.name[strcspn(sinhvien01.name, "\n")] = '\0';  
    
    printf("Moi nhap tuoi: ");
    scanf("%d", &sinhvien01.age);
    getchar();  
    
    printf("Moi nhap sdt: ");
    fgets(sinhvien01.phoneNumber, sizeof(sinhvien01.phoneNumber), stdin);
    sinhvien01.phoneNumber[strcspn(sinhvien01.phoneNumber, "\n")] = '\0';  
    
    printf("\nThong tin sinh vien: \n");
    printf("Ho va ten: %s\n", sinhvien01.name);
    printf("Tuoi: %d\n", sinhvien01.age);
    printf("Sdt: %s\n", sinhvien01.phoneNumber);
    
    return 0;
}
