#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char name[100];
    char *description;
    char *pRealloc; //���·����ڴ���β��ָ��

    strcpy(name, "Zara Ali");

    /* ��̬�����ڴ� */
    description = (char *)malloc(30 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "ERROR - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Zara Ali a DPS student.");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
    printf("===================\n");

    /* ��������Ҫ�洢�����������Ϣ */
    description = (char *)realloc(description, 10 * sizeof(char));
    pRealloc = description + strlen(description);
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat(description, "She is in class 10th.");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
    printf("pRealloc: %s\n", pRealloc);

    /* ʹ�� free() �����ͷ��ڴ� */
    free(description);

    // printf("Description: %s\n", description); //��֤�����ڴ����ͷź���ڴ�ֵ

    return 0;
}