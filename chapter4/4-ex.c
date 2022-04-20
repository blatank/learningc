#include <stdio.h>

/* 指定された数の*を出力して改行する */
static void print_stars(int num);


int main(void)
{
    int h, i, p;

    printf("右向きのピラミッドを作ります\n段数を入力してください：");
    scanf("%d", &h);

    /* 真ん中までの段落の数(真ん中から最後までの数でもある) */
    p = h - 1;
    for (i=0; i<p; i++) {
        /* その行で出力する*の数はi+1 */
        print_stars(i+1);
    }

    /* 真ん中の行はピラミッドの段数(=h) */
    print_stars(h);

    /* 真ん中から下は真ん中から上までの逆になる */
    /* その行で出力する*の数=h-i-1 */
    for (i=0; i<p; i++) {
        print_stars(h-i-1);
    }

    return 0;
}

/* 指定された数の*を出力して改行する */
static void print_stars(int num)
{
    int i;
    
    for (i=0; i<num; i++) {
        putchar('*');
    }
    printf("\n");
}