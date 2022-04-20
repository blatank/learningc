#include <stdio.h>

int main(void)
{
    int h, i, j, stars, lines;

    printf("段数を入力してください：");
    scanf("%d", &h);

    /* 実際の行数 */
    lines = 2 * (h - 1) + 1;

    for (i=0; i<h-1; i++) {
        for (j=0; j<i+1; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    for (j=0; j<h; j++) {
        putchar('*');
    }
    putchar('\n');

    for (i=0; i<h-1; i++) {
        stars = h - i - 1;
        for (j=0; j<stars; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}