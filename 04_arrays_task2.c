#include <stdio.h>

int main() {
    int n;
    int x[100];
    int temp;

    printf("Введите количество элементов: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        temp = x[i];
        x[i] = x[n - 1 - i];
        x[n - 1 - i] = temp;
    }

    printf("Массив в обратном порядке: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}
