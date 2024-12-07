
#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int id;
    char name[20];
    int grades[3];
};

struct Student fill_Student();
void print_all(Student s);

int main()
{
    // struct Student s1;
    int size;
    printf("enter the size of array : ");
    scanf("%d", &size);
    struct Student *ptr = (struct Student *)malloc(size * sizeof(struct Student));

    // for (int i = 0; i < 3; i++)
    // {
    //     students[i] = fill_Student();
    // }

    for (int i = 0; i < size; i++)
    {
        ptr[i] = fill_Student();
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     print_all(students[i]);
    // }

    for (int i = 0; i < size; i++)
    {
        print_all(ptr[i]);
    }
}

struct Student fill_Student()
{
    struct Student s;
    printf("please enter the id \n");
    scanf("%d", &s.id);
    printf("please enter the name \n");
    scanf("%s", s.name);
    printf("please enter the grades \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &s.grades[i]);
    }

    return s;
};

void print_all(Student s)
{
    printf("your id is : ");
    printf("%d", s.id);
    printf("\n");
    printf("your name is : ");
    printf("%s", s.name);
    printf("\n");
    printf("your grades are : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d", s.grades[i]);
        printf("\n");
    }
}
