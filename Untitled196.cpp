#include <stdio.h>

void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int A[5] = {10, 20, 30, 40, 50};
    int B[5];
    int n = 5;
    
    copyArray(A, B, n);
    
    printf("Mang B sau khi sao chep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    
    return 0;
}
