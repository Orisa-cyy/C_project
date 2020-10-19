#include <stdio.h>

int main()
{
    char s[3][10] = {"abcdefghij", "1234567890", "ABCDEFGHIJ"};
    // char(*k)[3] = {'a', 'b', 'c'};
    char(*m)[3] = {"qwe", "asd", "zxc"};
    char *n[3] = {"234", "345", "z4545"};
    char *p = "123";

    printf("s: %s\n", s);
    printf("*s: %s\n", *s);
    printf("s[0]: %s\n", s[0]);
    printf("*s[0]: %c\n", *s[0]);
    printf("m: %s\n", m);
    printf("n: %s\n", n);
    printf("*n: %s\n", *n);
    printf("n[0]: %s\n", n[0]);
    printf("*n[0]: %c\n", *n[0]);
    printf("p: %s\n", p);
    printf("*p: %p\n", *p);
    printf("*p: %.4x\n", *p);
    return 0;
}