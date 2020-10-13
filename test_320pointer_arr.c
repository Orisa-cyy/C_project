#include <stdio.h>

const int MAX = 4;

int main()
{
    const char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };
    int i = 0;

    for (i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n", i, names[i]);
    }
    printf("------%d\n", sizeof(names[1]));  //指针的大小
    printf("------%c\n", *names[1]);         //指针指向的值'H'
    printf("------%d\n", *names[1]);         //'H'的ASCII编码
    printf("------%x\n", names[1]);          //'H'的地址值
    printf("------%x\n", &names[1]);         //names[1]占用内存的地址
    printf("------%x\n", (names[1] + 1));    //'i'的地址值
    printf("------%x\n", names[2]);          //'N'的地址值
    printf("------%d\n", sizeof(*names[0])); //指针指向的'Z'的大小
    printf("\0\n");
    printf("\0fjiasojfieji\n");
    printf("--------------%c\n", *(names[0] + 8)); //打印"\0"
    printf("--------------%c\n", *(names[0] + 7));
    printf("--------------%c\n", *(names[0] + 9));
    return 0;
}