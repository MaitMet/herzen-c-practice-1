#include <stdio.h>

int main() {
    int m;
    int a = 1, b = 1, c = 1, p;

    printf("Введите m: ");
    scanf("%d", &m);

    for (int n = 0; ; n++) {
        if (n < 3) {
            p = 1;
        } else {
            p = a + b;
            a = b;
            b = c;
            c = p;
        }

        if (p > m) {
            break;
        }
        printf("%d ", p);
    }
    printf("\n");

    return 0;
}
