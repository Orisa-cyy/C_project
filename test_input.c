#include <stdio.h>

int main()
{
    int num=0;

    printf("����һ������ : ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("ż��") : printf("����");
}