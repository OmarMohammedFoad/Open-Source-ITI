#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void chooseCalulator(int choice)
{

    system("cls");
    int a, b, result;
    switch (choice)
    {
    case 0:
        printf("enter two numbers to add: ");
        scanf("%d %d", &a, &b);
        result = a + b;

        printf("result : %d\n", result);
        system("pause");

        break;
    case 1:
        printf("enter two numbers to subtract: ");
        scanf("%d %d", &a, &b);
        result = a - b;
        printf("result: %d\n", result);
        system("pause");

        break;
    case 2:
        printf("enter two numbers to multiply: ");
        scanf("%d %d", &a, &b);
        result = a * b;
        printf("result: %d\n", result);
        system("pause");

        break;
    case 3:
        printf("enter two numbers to divide: ");
        scanf("%d %d", &a, &b);
        if (b != 0)
        {
            result = a / b;
            printf("result: %d\n", result);
        }
        else
        {
            printf("error: mathematical error \n");
        }
        system("pause");

        break;

    case 4:
        exit(0);
        break;
    default:
        printf("invalid choice.\n");
    }
}

int main()
{
    char key;
    int x = 0;
    int y = 0;
    int choosen;
    const char *menu[] = {"add", "sub", "multi", "div", "exit"};
    do
    {
        for (int i = 0; i < 5; i++)
        {
            gotoxy(0, i);
            if (y == 5)
            {
                y = 0;
            }
            if (y == -1)
            {
                y = 4;
            }
            if (y == i)
            {
                printf("--> %s", menu[i]);
            }
            else
            {

                printf(" %s", menu[i]);
            }
        }
        key = getch();
        if (key == -32)
        {
            system("cls");
            key = getch();
            if (key == 72)
            {
                y--;
            }
            else if (key == 80)
            {
                y++;
            }
        }
        else
        {
            if (key == 13)
            {
                chooseCalulator(y);
                system("cls");
            }
        }

    } while (key != 27);

    return 0;
}
