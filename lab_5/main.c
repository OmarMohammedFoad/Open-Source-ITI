#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(char c1[], char c2[])
{
    int i = 0;
    int j = 0;
    while (c1[i] != '\0' && c2[j] != '\0')
    {

        if (c1[i] == c2[j])
        {
            i++;
            j++;
        }

        else if (c1[i] > c2[i])
        {
            return 1;
        }
        else if (c1[i] < c2[i])
        {
            return -1;
        }
    }

    if (i == j)
    {
        return 0;
    }

    // return 0;
};
void reverseStr(char c[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%c\t", c[i]);
    }
}
int main()
{
    // char firstname[10] = {};
    // char lastname[10] = {};
    // char fullName[20] = {};
    // printf("please enter first name\n");
    // scanf("%s", firstname);
    // printf("please enter last name\n");

    // scanf("%s", lastname);
    // strcat(fullName, firstname);
    // strcat(fullName, " ");
    // strcat(fullName, lastname);
    // char c2[] = {'o', 'm', 'a', 'r', '\0'};
    char c1[] = {'o', 'm', 'a', 'r'};
    reverseStr(c1, 4);
    // printf("%s", fullName);

    return 0;
}
