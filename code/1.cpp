#include <stdio.h>

int main() {
    int n;
    char str[100];
    FILE *fout = fopen("/dev/null", "w");
    printf("%d\n", EOF);
    while (~scanf("%d", &n)) {
        printf(" has %d digits\n", printf("%d", n));
        printf("%d\n", sprintf(str, "%d", n));
        printf("%d\n", fprintf(fout, "%d", n));
    }
    return 0;
}
