#include <stdio.h>
#include <inttypes.h>

int main() {
    int8_t a = 66;
    int b = 77;
    //printf("a = %lu, b = %lu\n", sizeof(a), sizeof(b));
    //printf("b = %d\n", b);
    printf("%" PRId8 "\n", a);
    printf("%s\n", PRId8);
    printf("%s\n", PRId16);
    printf("%s\n", PRId32);
    printf("%s\n", PRId64);
    printf("hello" "world");
    return 0;
}
