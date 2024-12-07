#include <stdio.h>
#include <string.h>

struct Ex
{
    char *s;
};

int main()
{
    struct Ex *p;
    p = (struct Ex *)

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
// {
//     int i = 0, j = 0;
//     while (str1[i] != '\0' && str2[j] != '\0')
//     {
//         if (str1[i] == str2[j])
//         {
//             i++;
//             j++;
//         }
//         else if (str1[i] > str2[j])
//         {
//             return 1;
//         }
//         else if (str1[i] < str2[j])
//         {
//             return -1;
//         }
//         else if (i - j == 0)
//         {
//             return 0;
//         }
//     }
// }