#include <stdio.h>

int main() {
    /*int a = 6, b = 3, d = 4;
    int *p = &a;
    (*p)--;
    int n;
    scanf("%d", &n);
    if (n & 1) {
        printf("odd\n");
    } else {
        printf("even\n");
    }

    printf("%d\n", a); */
    
    //交换两个数,自反原则
    int a, b;
    scanf("%d %d", &a, &b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("%d %d\n", a, b);
    return 0;
}
