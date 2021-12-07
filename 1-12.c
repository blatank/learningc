/*
    読み込んだ3つの変数の和を表示
*/
#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    puts("3つの変数を入力して下さい。");
    printf("整数1：");
    scanf("%d", &n1);
    printf("整数2：");
    scanf("%d", &n2);
    printf("整数3：");
    scanf("%d", &n3);

    printf("それらの和は%dです。\n", n1 + n2 + n3);

    return 0;
}
