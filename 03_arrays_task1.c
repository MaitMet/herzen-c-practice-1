#include <stdio.h>

int main() {
    int n;
    float x[100], y[100];
    float sum = 0, avg;
    int count = 0;

    printf("Введите количество элементов: ");
    scanf("%d", &n);

    printf("Введите элементы: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    for (int i = 0; i < n; i++) {
        y[i] = x[i] * x[i];
        sum = sum + y[i];
    }
    avg = sum / n;

    for (int i = 0; i < n; i++) {
        if (y[i] > avg) {
            count++;
        }
    }

    printf("Вектор Y: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", y[i]);
    }
    printf("\n");
    printf("Среднее арифметическое: %.2f\n", avg);
    printf("Элементов больше среднего: %d\n", count);

    return 0;
}
