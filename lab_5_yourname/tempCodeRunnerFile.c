#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

/**
 * left = 75
 * right 77
 * home 71
 * end 79
 * enter 13
 * backspace = 8
 *
 */

void gotoxy(int x, float y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    char key;
    int x = 0;

    int index = 0;
    int size;
    printf("enter the size of your name please: ");
    scanf("%d", &size);
    char *menu = (char *)malloc(size * sizeof(char));

    if (!menu)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        menu[i] = ' ';
    }

    do
    {

        key = getch();
        if ((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z'))
        {
            if (x < size)
            {
                menu[x++] = key;

                if (x > index)
                {
                    index = x;
                }
                else if (index == x)
                {
                    index = x;
                }
            }
        }

        if (key == -32)
        {
            key = getch();

            if (key == 77)
            {
                x++;
            }
            else if (key == 75)
            {
                x--;
            }

            else if (key == 71)
            {
                x = 0;
            }
            else if (key == 79)
            {
                x = index;
            }
        }
        else
        {
            if (key == 13)
            {
                printf("\nFinal Input: ");
                for (int i = 0; i < size; i++)
                {
                    printf("%c", menu[i]);
                }
                printf("\n");

                break;
            }

            if (key == 8)
            {
                if (x > 0)
                {
                    menu[--x] = ' ';
                }
            }
            if (key == 32)
            {
                // printf("%d", key);
                menu[index++] = ' ';
                x = index;
                if (x > index)
                {
                    index = x;
                }
            }
        }

        gotoxy(0, 4);
        for (int i = 0; i < size; i++)
        {

            printf("%c", menu[i]);
        }
        for (int i = 0; i < size; i++)
        {
            gotoxy(i, 5);
            // printf("%d", x);
            if (x <= 0)
            {
                x = 0;
            }

            if (x == index + 1)
            {
                x = index;
            }
            if (x == i)
            {
                printf("_");
            }
            else
            {
                printf(" ");
            }
        }

    } while (key != 27);

    free(menu);
    return 0;
}