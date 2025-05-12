#include <stdio.h>

int main() {
    int numbers[5];
    int even_count = 0;
    int odd_count = 0;

    printf("Hay nhap vao 5 so nguyen:\n");
int i; 
    for (i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("\nSo luong so chan da nhap la: %d\n", even_count);
    printf("So luong so le da nhap la: %d\n", odd_count);

    return 0;
}
