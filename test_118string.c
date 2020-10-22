#include <stdio.h>
#include <string.h>

int main()
{
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len, cmpResult;
    char *chptr1;
    char *chptr2;

    /* ���� str1 �� str3 */
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3); //Hello

    /* ���� str1 �� str2 */
    strcat(str1, str2);
    printf("strcat( str1, str2):   %s\n", str1); //HelloWorld

    /* ���Ӻ�str1 ���ܳ��� */
    len = strlen(str1);
    printf("strlen(str1) :  %d\n", len); //10

    cmpResult = strcmp(str1, str2);
    printf("%d\n", cmpResult); //-1

    chptr1 = strchr(str1, 'l');    //����һ��ָ�룬ָ���ַ��� s1 ���ַ� ch �ĵ�һ�γ��ֵ�λ�á�
    printf("-------%s\n", chptr1); //lloWorld
    printf("-------%p\n", chptr1); //0061FF06
    printf("-------%x\n", chptr1); //61ff06

    chptr2 = strstr(str1, str2);  //����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ��
    printf("-----%s\n", chptr2);  //World
    printf("-----%c\n", *chptr2); //W
    return 0;
}