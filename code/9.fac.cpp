#include <stdio.h>

int fac1(int n) {
    if (n == 0) return 1;
    return n * fac1(n - 1);
}

int fac2(int n) {
    return (1 + n) * n / 2;
}

int g(int (*func1)(int), int (*func2)(int), int x) {
    if (x < 5) return func1(x);
    else return func2(x);
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        printf("g(%d) = %d\n", n, g(fac1, fac2, n));
    }
    return 0;
}
