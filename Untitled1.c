#include <stdio.h>

int main() {
    int numbers[5];
    int sum_of_odds = 0;

    printf("Hay nhap vao 5 so nguyen:\n");
int i;
    for (i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 != 0) {
            sum_of_odds += numbers[i];
        }
    }

    printf("\nTong cac so le da nhap la: %d\n", sum_of_odds);

    return 0;
}
