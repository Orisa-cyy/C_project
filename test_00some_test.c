#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char y[10] = "ntse";
    char *x = y;
    n = strlen(x);
    *x = x[n];
    x++;
    printf("x=%s\n", x);
    printf("y=%s\n", y);
    printf("++++++++++++++++++\n");

    char c;
    c = '30';

    printf("%c===\n", c);
    printf("++++++++++++++++++\n");

    int a = 19, b;
    b = (a *= 3);
    printf("%d\n", b);

    printf("++++++++++++++++++\n");

    int *aa[10] = {};
    int(*bb)[10] = {1, 2, 3};
    printf("aa: %d, bb: %d\n", sizeof(aa), sizeof(bb));

    return 0;
}
