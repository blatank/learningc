#include <stdio.h>

int main(void)
{
    int no;

    scanf("%d", &no);

    /* noが正数のときに一の位が7かどうかを調べる */
    if (no > 0) {
        printf("noの最下位桁は");
        if ((no % 10) == 7) {
            puts("7です。");
        }
        else {
            puts("7ではありません。");
        }
    }
    else {
        puts("正数ではありません。");
    }

    return 0;
}