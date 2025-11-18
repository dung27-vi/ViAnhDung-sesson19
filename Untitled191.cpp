#include <stdio.h>

int findMax(int *arr, int n);

int main() {
    int arr[5] = {10, 20, 5, 30, 15};
    int n = 5;
    int max_val;
    
    max_val = findMax(arr, n);
    
    printf("Phan tu lon nhat la: %d\n", max_val);
    
    return 0;
}
int findMax(int *arr, int n) {
    int max = *arr;
    int *ptr = arr;
    
    for (int i = 0; i < n; i++) {
        if (*ptr > max) {
            max = *ptr;
        }
        ptr++;
    }
    
    return max;
}
