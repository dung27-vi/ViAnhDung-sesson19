#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void enterArray(int **arr, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    if (*n <= 0) return;
    *arr = (int*)realloc(*arr, (*n) * sizeof(int)); 
    printf("Nhap tung phan tu:\n");
    for (int i = 0; i < *n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}

void printEven(int *arr, int n) {
    printf("Cac phan tu la so chan: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void printPrimes(int *arr, int n) {
    printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void reverseArray(int *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(&arr[i], &arr[n - 1 - i]);
    }
    printf("Mang da duoc dao nguoc.\n");
}

void sortAscending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    printf("Mang da duoc sap xep tang dan.\n");
}

void sortDescending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    printf("Mang da duoc sap xep giam dan.\n");
}

void findElement(int *arr, int n) {
    int val;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &val);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            printf("Tim thay %d tai vi tri %d.\n", val, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay %d trong mang.\n", val);
    }
}
int main() {
    int *arr = NULL;
    int n = 0;
    int choice, subChoice;

    do {
        printf("\n................MENU....................\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("8. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("9. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enterArray(&arr, &n);
                break;
            case 2:
                printEven(arr, n);
                break;
            case 3:
                printPrimes(arr, n);
                break;
            case 4:
                reverseArray(arr, n);
                break;
            case 5:
                printf("MENU CON SAP XEP\n");
                printf("6. Tang dan\n");
                printf("7. Giam dan\n");
                printf("Lua chon sap xep: ");
                scanf("%d", &subChoice);
                if (subChoice == 6) {
                    sortAscending(arr, n);
                } else if (subChoice == 7) {
                    sortDescending(arr, n);
                } else {
                    printf("Lua chon khong hop le.\n");
                }
                break;
            case 8:
                findElement(arr, n);
                break;
            case 9:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 9);

    free(arr);
    return 0;
}
