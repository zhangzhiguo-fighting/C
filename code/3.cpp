#include <stdio.h>

int main() {
    char str[100];
    scanf("%[a-z]s", str); //[]字符匹配集
    printf("%s\n", str);
    return 0;
}
