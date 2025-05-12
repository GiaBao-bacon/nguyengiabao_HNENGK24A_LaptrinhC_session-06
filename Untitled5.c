#include <stdio.h>

int main() {
    int day, month, year;
    int daysInMonth;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (month < 1 || month > 12 || day < 1) {
        printf("Ngay thang nam khong hop le.\n");
        return 1;
    }

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    if (day > daysInMonth) {
        printf("Ngay thang nam khong hop le.\n");
        return 1;
    }

    printf("Ngay %d thang %d nam %d\n", day, month, year);

    return 0;
}
