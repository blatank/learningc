/*
    読み込んだ2つの整数値の差を求めて表示
*/
#include <stdio.h>

int main(void)
{
    int n1, n2, diff;

    puts("2つの整数を入力して下さい。");
    printf("整数1：");
    scanf("%d", &n1);
    printf("整数2：");
    scanf("%d", &n2);

    /* 差を絶対値で出す */
    if (n1 >= n2) {
        diff = n1 - n2;
    }
    else {
        diff = n2 - n1;
    }
    printf("それらの差は%dです。\n", diff);

    return 0;
}