#include <header1.h>

void funcD(int a, int b) {
    printf("funcD : %d + %d = %d\n", a, b, a + b);
    funcA(a);
    return ;
}
