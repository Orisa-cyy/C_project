#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char name[100];
    char *description;
    char *pRealloc; //重新分配内存后结尾处指针

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
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

    /* 假设您想要存储更大的描述信息 */
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

    /* 使用 free() 函数释放内存 */
    free(description);

    // printf("Description: %s\n", description); //验证扩大内存且释放后的内存值

    return 0;
}