/*
    読み込んだ整数値に12を加えた数を表示
*/
#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力して下さい：");
    scanf("%d", &no);

    printf("%dに12を加えると", no);
    printf("%dです。\n", no + 12);

    return 0;
}
