#include <stdio.h>

int main() {
    char str[100], str2[100];
    int ret;
    /*while ((ret = scanf("%[^\n]s", str)) != EOF) {
        getchar();
        printf("%s ret = %d\n", str, ret);
    }*/
    /*scanf("%[^\n]s", str);
    getchar();
    sprintf(str2, "(%s)", str);
    printf("str2 = %s\n", str2);*/
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    sprintf(str2, "%d.%d.%d.%d", a, b, c, d); //sprintf 可以用加减字符串的格式
    FILE *fd = fopen("out", "wb");
    fprintf(fd, "%s\n", str2);
    printf("str2 = %s\n", str2);
    return 0;
}
