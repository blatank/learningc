/*
 * 学生の点数を読み込んで分布表示
 */
#include <stdio.h>

#define STUDENT_MAX     (80)                        /* 最大の学生数 */
#define TENSU_MAX       (100)                       /* 点数の最大値 */
#define DIVISION        (10)                        /* 分布点数(TENSU_MAXから割り切れる数にすること) */
#define BUNPU_ARRAY_NUM ((TENSU_MAX/DIVISION)+1)    /* 分布配列数(+1はTENSU_MAX点の分) */

int main(void)
{
    int i, j;
    int student_num;                    /* 実際の学生数 */
    int tensu[STUDENT_MAX];             /* 点数 */
    int bunpu[BUNPU_ARRAY_NUM] = {0};   /* 分布 */
    int num_check;                      /* flag */

    printf("学生数を入力してください：");

    /* 学生数の入力チェック */
    do {
        scanf("%d", &student_num);

        if (   (student_num <= 0)               /* 無効な人数 */
            || (student_num > STUDENT_MAX)) {   /* 配列数より大きい */
            /* 警告鳴らして再入力を促す */
            printf("\a[error]学生数は1〜%dの間で入力ください。：", STUDENT_MAX);
            num_check = 0;
        }
        else {
            num_check = 1;
        }
    } while (num_check == 0);

    /* 各学生の点数入力 */
    printf("%d人の点数を入力してください：\n", student_num);

    for (i = 0; i < student_num; i++) {
        printf("%2d番：", i+1);
        
        /* 点数入力チェック */
        do {
            scanf("%d", &tensu[i]);
            
            if (   (tensu[i] <= 0)              /* 無効な人数 */
                || (tensu[i] > TENSU_MAX)) {    /* TENSU_MAX点より上はありません */
                /* 警告鳴らして再入力を促す */
                printf("\a[error]点数は1〜%dの間で入力ください。：", TENSU_MAX);
                num_check = 0;
            }
            else {
                num_check = 1;
            }
        } while (num_check == 0);

        /* 分布解析 */
        bunpu[tensu[i] / DIVISION]++;
    }

    /* 分布表示 */
    /* まずTENSU_MAX以外を表示 */
    for (i = 0; i < BUNPU_ARRAY_NUM - 1; i++) {
        /* 今回の表示範囲 */
        printf("%3d-%3d：", i * DIVISION, (i+1) * DIVISION - 1);

        /* 分布出力 */
        for (j = 0; j < bunpu[i]; j++) {
            putchar('*');
        }
        printf("\n");
    }

    /* TENSU_MAX表示 */
    printf("    %3d：", TENSU_MAX);

    /* 分布出力 */
    for (i = 0; i < bunpu[BUNPU_ARRAY_NUM-1]; i++) {
        putchar('*');
    }
    printf("\n");

    return 0;
}