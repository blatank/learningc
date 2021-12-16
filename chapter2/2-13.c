/*
    読み込んだ身長と体重からBMIを計算して表示
*/
#include <stdio.h>

int main(void)
{
    int height, weight;

    printf("身長[cm]を入力してください。：");
    scanf("%d", &height);

    printf("体重[kg]を入力してください。：");
    scanf("%d", &weight);

    /* BMI = 体重[kg] / 身長[m]の二乗 */
    printf("BMIは%.2fです。\n", weight / ((height / 100.0) * (height / 100.0)));

    return 0;
}
