#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *x, int *y);
int main()
{
    // int *y;
    // int x;
    // x = 5;
    // y = &x;

    // printf("%d", x);
    // printf("\n");
    // printf("%d", y);

    // float x;
    // float *ptr;
    // x = 2.3;
    // ptr = &x;

    // printf("x=%f", x);
    // printf("\n");
    // printf("ptr =%p", ptr);
    // ptr++;
    // ptr++;
    // printf("\n");
    // printf("after ptr =%p", ptr);
    // printf("\n");

    // int a = 5, b = 7;
    // swap(&a, &b);
    // printf("a = %d", a);
    // printf("\n");
    // printf("b = %d", b);
    // printf("\n");

    int arr[10];
    int *ptr;
    ptr = arr;

    for (int i = 0; i < 10; i++)
    {
        scanf("")
    }

    return 0;
}

// call by address
void swap(int *x, int *y)
{

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
