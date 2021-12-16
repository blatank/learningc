/*
    半径を読み込んで円の面積を求めて表示
*/
#include <stdio.h>
#include <math.h>       /* M_PI */

int main(void)
{
    double r;

    printf("半径は：");
    scanf("%lf", &r);

    printf("円の面積は%fです。\n", M_PI * r * r);    /* 円の面積 = π * rの2乗 */

    return 0;
}
