/*
    等価演算子と関係演算子が生成する値を表示
*/
#include <stdio.h>
int main(void)
{
    int a, b;

    puts("二つの整数を入力して下さい。");
    printf("変数a：");
    scanf("%d", &a);
    printf("変数b：");
    scanf("%d", &b);

    puts("等価式の値");
    printf("a == b の値：%d\n", a == b);

    puts("関係式の値");
    printf("a <  b の値：%d\n", a < b);
    printf("a <= b の値：%d\n", a <= b);
    printf("a >  b の値：%d\n", a > b);
    printf("a >= b の値：%d\n", a >= b);
}