/*
    二つの整数値を読み込んで和と積を表示
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

    printf("それらの和は%dで、積は%dです。\n", a + b, a * b);

    return 0;
}
