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
        fprintf(stderr, "����ţ�%d\n", errnum);
        perror("ͨ��perror�������");
        fprintf(stderr, "���ļ�����%s\n", strerror(errnum));
    }
    else
    {
        fclose(pf);
    }
    return 0;
}