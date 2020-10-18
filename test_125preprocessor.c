#include <stdio.h>

#define message_for(a, b) \
    printf(#a " and " #b ": We love you!\n") //宏延续运算符（\）&&字符串常量化运算符（#）

#define tokenpaster(n) printf("token" #n " = %d", token##n) //标记粘贴运算符（##

#if !defined(MESSAGE)
#define MESSAGE "You wish!"
#endif

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main(void)
{
    message_for(Carole, Debra);

    printf("\n================\n");

    int token34 = 40;
    tokenpaster(34);

    printf("\n================\n");

    printf("Here is the message: %s\n", MESSAGE);

    printf("\n================\n");
    printf("Max between 20 and 10 is %d\n", MAX(10, 20));

    return 0;
}
