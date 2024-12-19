#include<stdio.h>
#include<string.h>

int main() {
    int i;
    struct SinhVien {
        int id;          
        char name[50];    
        int age;          
        char phoneNumber[20];   
    };

    struct SinhVien list[50];
    
    for(i = 0; i < 5; i++) {
        list[i].id = i + 1; 
        
        printf("\nMoi nhap thong tin cho sinh vien thu %d:\n", i + 1);
        
        printf("Moi nhap Ho ten: ");
        fgets(list[i].name, sizeof(list[i].name), stdin);
        list[i].name[strcspn(list[i].name, "\n")] = '\0'; 
        
        printf("Moi nhap tuoi: ");
        scanf("%d", &list[i].age);
        getchar(); 
        
        printf("Moi nhap so dien thoai: ");
        fgets(list[i].phoneNumber, sizeof(list[i].phoneNumber), stdin);
        list[i].phoneNumber[strcspn(list[i].phoneNumber, "\n")] = '\0'; 
    }

    printf("\nThong tin cac sinh vien: \n");
    for(i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", list[i].id);
        printf("Ho va ten: %s\n", list[i].name);
        printf("Tuoi: %d\n", list[i].age);
        printf("Sdt: %s\n", list[i].phoneNumber);
    }

    return 0;
}
