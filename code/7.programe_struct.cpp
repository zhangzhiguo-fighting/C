#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    srand(time(0));
    int a, b;
    scanf("%d%d", &a, &b);
    if (a - b) {
        printf("not equal\n");
    } else {
        printf("equal\n");
    }

    if ((a++) && (b++)) { //短路原则
        printf("true\n");
    } else {
        printf("false\n");
    }

    if ((a++) || (b++)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    printf("a = %d, b = %d\n", a, b);

    for (int i = 0; i < 10; i++) {
        i && printf(" ");
        printf("%d", i);
    }
    printf("\n");
    
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        int val = rand() % 100;
        if (val & 1) cnt += 1;
        i == 0 || printf(" ");
        printf("%d", val);
    }
    printf("\n");
    printf("odd number : %d\n", cnt);
    return 0;
}

