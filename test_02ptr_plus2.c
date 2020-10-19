#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {11, 12, 13, 14, 15};
    int *p1, *p2;

    printf("1-->sizeof(arr1): %d\n", sizeof(arr1));
    printf("2-->sizeof(arr2): %d\n", sizeof(arr2));

    printf("^^^^^^^^^^^^^^^\n");

    p1 = arr1;
    p2 = arr2;

    *p1++ = *p2++;
    printf("3-->arr1[0]: %d, arr2[0]: %d\n", arr1[0], arr2[0]);
    printf("4-->arr1[1]: %d, arr2[1]: %d\n", arr1[1], arr2[1]);
    printf("5-->*p1: %d, *p2: %d\n", *p1, *p2);
    printf("6-->p1: %x, p2: %x\n", p1, p2);

    *p2++ = *p1++;
    printf("7-->arr1[0]: %d, arr2[0]: %d\n", arr1[0], arr2[0]);
    printf("8-->arr1[1]: %d, arr2[1]: %d\n", arr1[1], arr2[1]);
    printf("9-->*p1: %d, *p2: %d\n", *p1, *p2);
    printf("10-->p1: %x, p2: %x\n", p1, p2);
}
