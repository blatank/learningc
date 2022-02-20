/*
 * 法定超残業時間と法定内残業時感を計算する
 */
#include <stdio.h>

int main(void)
{
    /* 入力 */
    float working_time;     /* 総労働時間[h] */
    float paid_rest_time;   /* 有給休暇[h] */
    int   month_days;       /* 月の日数[日] */
    int   req_days;         /* 要出勤日数[日] */

    /* work */
    float limit36_time;     /* 36下限[h] */
    float req_limit_time;   /* 要出勤日数から求めた要勤務時間[h] */
    float flex_limit;       /* フレックス下限[h] */
    float act_working_time; /* 実労働時間[h] */

    /* 出力 */
    float overtime_over;    /* 法定超残業時間[h] */
    float overtime_inner;   /* 法定内労働時間[h] */

    /* 入力 */
    printf("総労働時間[h]：");
    scanf("%f", &working_time);

    printf("有給休暇[h]：");
    scanf("%f", &paid_rest_time);

    printf("月の日数[日]：");
    scanf("%d", &month_days);

    printf("要出勤日数[日]：");
    scanf("%d", &req_days);

    /* 36下限 */
    /* 40[h/7日] / 7[日] * 月の日数[日] */
    limit36_time = 40.0 / 7.0 * (float)month_days;

    /* 要出勤日数から求めた要勤務時間[h] */
    req_limit_time = (float)req_days * 8.0;

    /* フレックス下限 */
    /* 上で計算した時間の小さい方 */
    if (limit36_time >= req_limit_time) {
        flex_limit = req_limit_time;
    }
    else {
        flex_limit = limit36_time;
    }

    /* 実労働時間[h] */
    act_working_time = working_time + paid_rest_time;

    /* 法定超残業時間[h] */
    /* 実労働時間 - (法定超残業時間 + フレックス下限) >= 0 */
    if (working_time > flex_limit) {
        overtime_over = working_time - flex_limit;
    }
    else {
        overtime_over = 0.0;
    }

    /* 法定内残業時間[h] */
    /* 実労働時間 - (法定超残業時間 + フレックス下限) >= 0 */
    overtime_inner = act_working_time - (overtime_over + flex_limit);
    if (overtime_inner < 0.0) {
        overtime_inner = 0.0;
    }

    /* 計算結果を出力 */
    printf("法定超残業時間は%.2f[h]です。\n", overtime_over);
    printf("法定内残業時間は%.2f[h]です。\n", overtime_inner);

    return 0;
}