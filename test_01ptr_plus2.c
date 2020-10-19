#include <stdio.h>

int main()
{
    int a = 1, *ap;
    int b = 2, *bp;
    ap = &a;
    bp = &b;
    printf("===1===%x %x\n", ap, bp);
    *ap++ = *bp++;
    printf("===2===%d %d\n", a, b);
    printf("===3===%x %x\n", &a, &b);
    printf("===4===%d %d\n", *ap, *bp);
    printf("===5===%x %x\n", ap, bp);

    printf("^^^^^^^^^^^^^^^\n");

    *bp++ = *ap++;
    printf("===6===%d %d\n", a, b);
    printf("===7===%x %x\n", &a, &b);
    printf("===8===%d %d\n", *ap, *bp);
    printf("===9===%x %x\n", ap, bp);

    printf("^^^^^^^^^^^^^^^\n");

    return 0;
}