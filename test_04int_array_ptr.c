#include <stdio.h>

int main()
{
    int arr[3][3] = {4, 5, 6, 3, 4, 5, 23, 4, 3};
    int(*k)[3] = {2, 3, 4};
    int *m[3];

    printf("arr: %x\n", arr);
    printf("*arr: %x\n", *arr);
    printf("**arr: %d\n", **arr);
    printf("*(arr+1): %x\n", *(arr + 1));
    printf("**(arr+1): %d\n", **(arr + 1));
    printf("*(*arr+1): %d\n", *(*arr + 1));
    printf("arr[0]: %x\n", arr[0]);
    printf("*arr[0]: %d\n", *arr[0]);
    printf("arr[1]: %x\n", arr[1]);
    printf("*arr[1]: %d\n", *arr[1]);
    printf("k: %x\n", k);
    printf("*k: %d\n", *k);
    printf("m: %d\n", m);
}