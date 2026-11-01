#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    double a;
    int n;
    int i;
    double result = 1;

    setlocale(LC_CTYPE, "");

    printf("¬ведите a: ");
    scanf("%lf", &a);
    printf("¬ведите n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        result = result * (a - i * n);
    }

    printf("«начение выражени€ a(a - n)(a - 2n)...(a - n^2) = %.2f\n", result);

    return 0;
}
