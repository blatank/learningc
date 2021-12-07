/*
    読み込んだ整数値に6を減じた数を表示
*/
#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力して下さい：");
    scanf("%d", &no);

    printf("%dから6を減じると、", no);
    printf("%dです。\n", no - 6);

    return 0;
}
