#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend = 20;
    int divisor = 5;
    int quotient;

    if (divisor == 0)
    {
        fprintf(stderr, "除数为 0 退出运行...\n");
        exit(EXIT_FAILURE); //-1
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient 变量的值为 : %d\n", quotient);

    exit(EXIT_SUCCESS); //0
}