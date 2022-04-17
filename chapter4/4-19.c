#include <stdio.h>

int main(void)
{
    int no;

    printf("何個*を表示しますか：");
    scanf("%d", &no);

    if (no > 0) {
        int i;
        for (i = 0; i < no; i++) {
            putchar('*');
            if (i % 5 == 4) {
                putchar('\n');
            }
        }
　　　　
    }
    return 0;
}