#include <stdio.h>

int main() {
    int n;
    int a[100];

    printf("Введите количество элементов: ");
    scanf("%d", &n);

    printf("Введите элементы: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int palindrom = 1;
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            palindrom = 0;
        }
    }

    if (palindrom == 1) {
        printf("Массив является палиндромом\n");
    } else {
        printf("Массив не является палиндромом\n");
    }

    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    int second = max;
    for (int i = 0; i < n; i++) {
        if (a[i] < max) {
            if (second == max || a[i] > second) {
                second = a[i];
            }
        }
    }

    if (second == max) {
        printf("Все элементы одинаковые\n");
    } else {
        printf("Второй по величине элемент: %d\n", second);
    }

    return 0;
}
