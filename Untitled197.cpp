#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void menu(int *arr, int *n);
void nhapMang(int **arr, int *n);
void hienThiMang(int *arr, int n);
void tinhDoDai(int n);
void tinhTong(int *arr, int n);
void timMax(int *arr, int n);

int main() {
    int *arr = NULL;
    int n = 0;
    menu(arr, &n);
    return 0;
}
void menu(int *arr, int *n) {
    int choice;
    do {
        printf("\n--------------- MENU ----------------\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(&arr, n);
                break;
            case 2:
                hienThiMang(arr, *n);
                break;
            case 3:
                tinhDoDai(*n);
                break;
            case 4:
                tinhTong(arr, *n);
                break;
            case 5:
                timMax(arr, *n);
                break;
            case 6:
                if (arr != NULL) free(arr);
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 6);
}
void nhapMang(int **arr, int *n) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);

    if (*n <= 0) {
        printf("So phan tu khong hop le.\n");
        return;
    }

    if (*arr != NULL) {
        free(*arr);
    }

    *arr = (int *)malloc(*n * sizeof(int));
    if (*arr == NULL) {
        printf("Cap phat bo nho that bai.\n");
        exit(1);
    }

    printf("Nhap tung phan tu:\n");
    for (int i = 0; i < *n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", (*arr + i));
    }
}
void hienThiMang(int *arr, int n) {
    if (arr == NULL || n == 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
void tinhDoDai(int n) {
    if (n == 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Do dai mang la: %d\n", n);
}
void tinhTong(int *arr, int n) {
    if (arr == NULL || n == 0) {
        printf("Mang rong.\n");
        return;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    printf("Tong cac phan tu trong mang la: %d\n", sum);
}
void timMax(int *arr, int n) {
    if (arr == NULL || n == 0) {
        printf("Mang rong.\n");
        return;
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
}
