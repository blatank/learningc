/* 4-27改 */
#include <stdio.h>

int main(void)
{
    int len;
    int i, j;

    printf("１辺を入力せよ！：");
    scanf("%d", &len);

    for (i=0; i<len; i++) {
        for (j=0; j<len; j++) {
            // スペースの数：len - i - 1
            // *の数：i + 1
            if (i <= j) {
                putchar('*');
            }
            else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}
