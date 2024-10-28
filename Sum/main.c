#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fisrtNumber=0;
    int secondNumber=0;
    int sum=0;
    printf("Please enter your first number");
    scanf("%d",&fisrtNumber);
    printf("please enter the second number");
    scanf("%d",&secondNumber);
    sum = fisrtNumber+secondNumber;
    printf("The number will be %d",sum);

    return 0;
}
