/*
    読み込んだ二つの整数値の平均値の符号を反転した値を表示
*/
#include <stdio.h>

int main(void)
{
    int x, y;

    puts("二つの整数を入力して下さい。");
    printf("整数x：");
    scanf("%d", &x);
    printf("整数y：");
    scanf("%d", &y);

    printf("平均値の符号を反転した値は%dです。\n", -((x + y) / 2));

    return 0;
}
