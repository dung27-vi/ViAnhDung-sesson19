#include <stdio.h>

int countValue(int *arr, int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr;
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d");
    }
    printf("Nhap gia tri can tim x: ");
    
    return 0;
}
