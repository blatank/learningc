#include <stdio.h>

int main(void)
{
    int h, i, j, stars, spaces, half_line;

    printf("段数を入力してください：");
    scanf("%d", &h);

    half_line = h - 1;
    for (i=0; i<h; i++) {
        /* 中心までに存在する*の数 stars = i */
        stars = i;

        /* 中心までの空白数 = half_line - stars */
        spaces = half_line - stars;

        /* 左側 */
        for (j=0; j<spaces; j++) {
            putchar(' ');
        }
        for (j=0; j<stars; j++) {
            putchar('*');
        }
        
        /* 中心は決め打ち */
        putchar('*');

        /* 右側 */
        for (j=0; j<stars; j++) {
            putchar('*');
        }
        for (j=0; j<spaces; j++) {
            putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}