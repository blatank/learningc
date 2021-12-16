/*
    読み込んだ二つの整数の比率を百分率(実数)で表示
*/
#include <stdio.h>

int main(void)
{
    int a, b;

    puts("二つの整数を入力して下さい。");
    printf("整数a：");
    scanf("%d", &a);
    printf("整数b：");
    scanf("%d", &b);

    printf("aの値はbの%f%%です。\n", (double)a / (double)b * 100.0);
    return 0;
}
