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
    printf("------%d\n", sizeof(names[1]));  //ָ��Ĵ�С
    printf("------%c\n", *names[1]);         //ָ��ָ���ֵ'H'
    printf("------%d\n", *names[1]);         //'H'��ASCII����
    printf("------%x\n", names[1]);          //'H'�ĵ�ֵַ
    printf("------%x\n", &names[1]);         //names[1]ռ���ڴ�ĵ�ַ
    printf("------%x\n", (names[1] + 1));    //'i'�ĵ�ֵַ
    printf("------%x\n", names[2]);          //'N'�ĵ�ֵַ
    printf("------%d\n", sizeof(*names[0])); //ָ��ָ���'Z'�Ĵ�С
    printf("\0\n");
    printf("\0fjiasojfieji\n");
    printf("--------------%c\n", *(names[0] + 8)); //��ӡ"\0"
    printf("--------------%c\n", *(names[0] + 7));
    printf("--------------%c\n", *(names[0] + 9));
    return 0;
}