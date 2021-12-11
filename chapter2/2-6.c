/*
    読み込んだ実数値をそのまま表示
*/
#include <stdio.h>

int main(void)
{
    double x;

    printf("実数を入力して下さい：");
    scanf("%lf", &x);

    printf("あなたは%lfと入力しましたね。\n", x);

    return 0;
}
