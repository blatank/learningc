/*
    良い込んだ2つの整数値の大小関係を表示
*/
#include <stdio.h>

int main(void)
{
    int a, b;

    puts("2つの整数を入力して下さい。");
    printf("整数A：");
    scanf("%d", &a);
    printf("整数B：");
    scanf("%d", &b);

    if (a == b) {
        puts("AとBは等しいです。");
    }
    else if (a > b) {
        puts("AはBより大きいです。");
    }
    else {
        puts("AはBより小さいです。");
    }
}