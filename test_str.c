#include <stdio.h>
#include <string.h>
int FindSubString(char *pch)
{
    int count = 0;
    char *p1 = pch;
    while (*p1 != '\0')
    {
        if (*p1 == p1[1] - 1)
        {
            p1++;
            count++;
        }
        else
        {
            break;
        }
    }
    int count2 = count;
    while (*p1 != '\0')
    {
        if (*p1 == p1[1] + 1)
        {
            p1++;
            count2--;
        }
        else
        {
            break;
        }
    }
    if (count2 == 0)
        return (count);
    return (0);
}
void ModifyString(char *pText)
{
    char *p1 = pText;
    char *p2 = p1;
    while (*p1 != '\0')
    {
        int count = FindSubString(p1);
        if (count > 0)
        {
            *p2++ = *p1;
            sprintf(p2, "%i", count);
            while (*p2 != '\0')
            {
                p2++;
            }
            printf("p2 value:%x\n", p2);
            printf("count: %d\n", count);
            printf("str: %s\n",pText);
            p1 += count + count + 1;
            printf("p1 value:%x\n", p1);
        }
        else
        {
            *p2++ = *p1++;
        }
    }
}
void main(void)
{
    char text[32] = "XYBCDCBABABA";
    printf("text addr: %x\n", text);
    ModifyString(text);
    printf(text);
}