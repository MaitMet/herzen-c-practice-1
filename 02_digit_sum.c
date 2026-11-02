#include <stdio.h>

int main() {
    int num, sum;

    do {
        printf("Введите положительное целое число: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Число должно быть положительным!\n");
            sum = 11;
        } else {
            sum = 0;
            while (num > 0) {
                sum = sum + num % 10;
                num = num / 10;
            }
            printf("Сумма цифр: %d\n", sum);
        }
    } while (sum > 10);

    printf("Программа завершена.\n");
    return 0;
}
