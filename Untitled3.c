#include <stdio.h>
#include <string.h>

int main() {
    char correct_password[] = "123";
    char entered_password[50];

    printf("Nhap mat khau: ");
    fgets(entered_password, sizeof(entered_password), stdin);
    entered_password[strcspn(entered_password, "\n")] = 0;

    if (strcmp(entered_password, correct_password) == 0) {
        printf("Dung mat khau!\n");
    } else {
        printf("Sai mat khau!\n");
    }

    return 0;
}
