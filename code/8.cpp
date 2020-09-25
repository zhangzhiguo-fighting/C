#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int digits = 0;
    do { //求一个数的位数
        n /= 10;
        digits += 1;
    } while (n);
    printf("%d\n", digits);
    return 0;
}
