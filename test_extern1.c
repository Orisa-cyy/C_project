#include <stdio.h>
#include "test_extern2.c"

int count;
extern void write_extern();

int main()
{
    count = 5;
    write_extern();
}