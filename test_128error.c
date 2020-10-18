#include <stdio.h>
#include <string.h>
#include <errno.h>

extern int errno;

int main()
{
    FILE *pf;
    int errnum;
    pf = fopen("xxx.txt", "rb");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "错误号：%d\n", errnum);
        perror("通过perror输出错误");
        fprintf(stderr, "打开文件错误：%s\n", strerror(errnum));
    }
    else
    {
        fclose(pf);
    }
    return 0;
}