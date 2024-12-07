#include <stdio.h>
#include <string.h>

struct Ex
{
    char *s;
};

int main()
{
    struct Ex *p;
    p = (struct Ex *)malloc(sizeof(struct Ex));

    p->s = (char *)malloc(sizeof(char[20]));

    strcpy(p->s, "ABS");

    printf("%s", p->s);
    return 0;
}
int res(int *n)
{
    int j = 2;
    n = &j;
    printf("%d\n", *n);
}

// int str_comp(char str1[], char str2[])