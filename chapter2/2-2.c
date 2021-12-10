/*
    読み込んだ整数値を5で割った商と剰余を表示
*/
#include <stdio.h>

int main(void)
{
    int n;

    printf("nの値を入力して下さい：");
    scanf("%d", &n);

    printf("n / 5は%dです。\n", n / 5);
    printf("n %% 5は%dです。\n", n % 5);

    return 0;
}
