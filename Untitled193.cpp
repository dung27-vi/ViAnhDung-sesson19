#include <stdio.h>

void average(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    float avg = (float)sum / n;
    printf("Gia tri trung binh cua mang la: %.2f\n", avg);
}

int main() {
    int n;
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int arr;
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d");
    }

    return 0;
}
