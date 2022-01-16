/*
    読み込んだ4つの整数値の最小値を求めて表示
*/
#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;

    puts("4つの整数値を入力して下さい。");
    printf("整数1：");
    scanf("%d", &n1);
    printf("整数2：");
    scanf("%d", &n2);
    printf("整数3：");
    scanf("%d", &n3);
    printf("整数4：");
    scanf("%d", &n4);

    printf("最小値は%dです\n", (n1 < n2) ?
                               ((n1 < n3) ? ((n1 < n4) ? n1 : n4) : ((n3 < n4) ? n3 : n4)):
                               ((n2 < n3) ? ((n2 < n4) ? n2 : n4) : ((n3 < n4) ? n3 : n4)));
    
    return 0;
}