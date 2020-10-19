#include <stdio.h>

void bubble_sort(int arr[], int len) //ð������
{
    int i, j, temp;
    printf("=====%d\n", (int)sizeof(arr));
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int len) //ѡ������Selection sort��
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < len; j++) //���Lδ�����Ԫ��
        {
            if (arr[j] < arr[min])
                min = j;              //�o���Сֵ
            swap(&arr[i], &arr[min]); //�����Q
        }
    }
}

void insertion_sort(int arr[], int len) //��������Insertion Sort
{
    int i, j, temp;

    for (i = 1; i < len; i++)
    {
        temp = arr[i];
        for (j = i; j > 0 && arr[j - 1] > temp; j--)
            arr[j] = arr[j - 1];
        arr[j] = temp;
    }
}

int main()
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    printf("%d\n", (int)sizeof(arr));
    int len = (int)sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}