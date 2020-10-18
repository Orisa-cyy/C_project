#include <stdio.h>

double factorial(unsigned int i) //阶乘
{
    if (i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}

int fibonaci(int i) //斐波那契数列
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibonaci(i - 2) + fibonaci(i - 1);
}

int main()
{
    int a = 6;
    int b;
    printf("%d 的阶乘为：%f\n", a, factorial(a));

    printf("================\n");

    for (b = 0; b < 10; b++)
    {
        printf("%d\n", fibonaci(b));
    }

    return 0;
}