#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend = 20;
    int divisor = 5;
    int quotient;

    if (divisor == 0)
    {
        fprintf(stderr, "����Ϊ 0 �˳�����...\n");
        exit(EXIT_FAILURE); //-1
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient ������ֵΪ : %d\n", quotient);

    exit(EXIT_SUCCESS); //0
}