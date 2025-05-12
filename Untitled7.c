#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &n);

    printf("Cac uoc so cua %d la: ", n);
    int i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
