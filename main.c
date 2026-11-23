#include <stdio.h>

int main(void)
{
    int a, b, c;
    int *p, *q, *r;

    /* p, q, r にそれぞれ a, b, c のアドレスを代入 */
    p = &a;
    q = &b;
    r = &c;

    /* p を使って a に入力 */
    scanf("%d", p);

    /* 間接参照だけを使って代入 */
    *q = 5;
    *r = *p + *q;

    printf("%d,%d,%d", a, b, c);

    return 0;
}
