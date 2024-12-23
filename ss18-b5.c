#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char FullName[50];
    int Age;
    char Phone[50];
} Student;
int main() {
    Student students[50] = {
        {1, "Tran Dang Viet", 18, "0123456789"},
        {2, "Dang Tuan Minh", 18, "0123456788"},
        {3, "Dinh Dinh Thanh", 18, "0123456787"},
        {4, "Thieu Tien Dung", 18, "0123456786"},
        {5, "Tran Thi Thu Trang", 18, "0123456785"},
    };
    int numStudents = 5;
    int id, found = 0;
    char newName[50];
    int newAge;

    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &id);
    getchar(); 

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("Nhap ten moi: ");
            fgets(newName, sizeof(newName), stdin);
            newName[strcspn(newName, "\n")] = 0; 

            printf("Nhap tuoi moi: ");
            scanf("%d", &newAge);

            strcpy(students[i].FullName, newName);
            students[i].Age = newAge;
            printf("Cap nhat thong tin thanh cong cho sinh vien co ID %d.\n", id);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi ID: %d\n", id);
    }

    printf("Thong tin sinh vien sau khi thay doi:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n",
               students[i].id, students[i].FullName, students[i].Age, students[i].Phone);
    }

    return 0;
}
