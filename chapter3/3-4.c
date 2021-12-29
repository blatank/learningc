/*
    読み込んだ整数値の絶対値を表示
*/
#include <stdio.h>

int main(void)
{
    int num;

    printf("整数を入力して下さい：");
    scanf("%d", &num);

    /* 負の値なら2の補数を取る */
    /* 注)0x80000000=-2147483648はうまくいかない */
    if (num < 0) {
        num = -num;
    }
    printf("絶対値は%dです。\n", num);

    return 0;
}