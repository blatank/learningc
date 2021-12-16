/*
    読み込んだ二つの実数の比率を百分率で表示
*/
#include <stdio.h>
int main(void)
{
    double a, b;

    puts("二つの実数を入力してください");
    printf("実数a：");
    scanf("%lf", &a);
    printf("実数b：");
    scanf("%lf", &b);

    printf("aの値はbの値の%f%%です。\n", a / b * 100);

    return 0;
}
