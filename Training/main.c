#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int matrix[3][4] = {{}};
    // printf("please enter values of matrix\n");
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         printf("enter the value of row %d\n", row);
    //         scanf("%d", &matrix[row][col]);
    //     }
    // }

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {

    //         printf("%d\t", matrix[row][col]);
    //     }
    //     printf("\n");
    // }

    char str[] = {"ITI"};

    for (int row = 0; row < 5; row++)
    {
        printf("%c\t", str[row]);
    }

    return 0;
}
