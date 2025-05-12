#include <stdio.h>

int main() {
    float initial_balance, interest_rate;
    int months;
    float final_balance;

    printf("Nhap so tien ban dau: ");
    scanf("%f", &initial_balance);

    printf("Nhap lai suat hang thang (phan tram): ");
    scanf("%f", &interest_rate);

    printf("Nhap so thang gui: ");
    scanf("%d", &months);

    final_balance = initial_balance;
    int i; 
    for (i = 0; i < months; i++) {
        final_balance += final_balance * (interest_rate / 100.0);
    }

    printf("So tien lai: %.3f\n", final_balance - initial_balance);
    printf("Tong so tien nhan duoc: %.3f\n", final_balance);

    return 0;
}
