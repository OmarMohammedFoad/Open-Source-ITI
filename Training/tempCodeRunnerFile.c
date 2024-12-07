#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
struct Employee
{
    char name[20];
    int salary;
    int id;
};

struct Employee fill_data();

void print_data(struct Employee e);
#define y 6
int main()
{

    int arr[3] = {
        1,
        2,
        3,
        4,
    };

    // int *ptr;
    // int ar[2];
    // ptr = ar;
    // ptr++;
    // ar++;
    // struct Employee emp;
    // int size;
    // printf("enter the size of the array\n");
    // scanf("%d", &size);
    // struct Employee *pemp = (struct Employee *)malloc(size * sizeof(struct Employee));
    // if (pemp)
    // {
    //     for (int i = 0; i < size; i++)
    //     {
    //         pemp[i] = fill_data();
    //     }

    //     for (size_t i = 0; i < size; i++)
    //     {
    //         print_data(*(pemp + i));
    //     }

    //     free(pemp);
    // }
    // // printf("%d", (*pemp).id);
    // printf("%d", pemp->id);
    return 0;
}

struct Employee fill_data()
{
    struct Employee e;

    printf("please type your name\n");
    scanf("%s", e.name);

    printf("enter your ID\n");
    scanf("%d", &e.id);
    printf("enter your salary\n");
    scanf("%d", &e.salary);

    return e;
};

void print_data(struct Employee e)
{
    printf("%s\n", e.name);
    printf("%d\n", e.id);
    printf("%d\n", e.salary);
}
