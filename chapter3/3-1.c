/*
    読み込んだ整数値は10の倍数か？
*/
#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力して下さい：");
    scanf("%d", &no);

    if ((no % 10) != 0) {
        puts("その数は10の倍数ではありません。");
    }
    
    return 0;
}