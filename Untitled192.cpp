#include <stdio.h>

void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }
    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr;
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", & i);
    }
    int even_count, odd_count;
    int *p_even = &even_count;
    int *p_odd = &odd_count;
    
    printf("So phan tu chan: %d\n", even_count);
    printf("So phan tu le: %d\n", odd_count);
    
    return 0;
}
