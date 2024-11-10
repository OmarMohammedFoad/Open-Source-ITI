#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,root1,root2,disc;

    printf("please enter the number of a ,b and c :\nsad");
    printf("enter number a:");
    scanf("%lf",&a);
    printf("enter  number b: ");
    scanf("%lf", &b);
    printf("enter  number c: ");
    scanf("%lf", &c);
    disc = b * b - 4 * a * c;
    printf("%lf",disc);

    if(a!=0){
    if(disc > 0){

        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2*a);
        printf("root1 =  %lf root2 = %lf \n",root1,root2);

    }
     if(disc == 0){
        root1 = root2 = -b / (2 * a);
        printf("root_1 = %lf root_2 = %lf \n",root1,root2);

    }
    }else{
        printf("please enter rakm 7elw");
    }

printf("question 2 \n");

    int num1 ,num2,num3,num4,num5,max,min;
    printf("please enter the numbers \n");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    min = max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max){
         max = num4;
    }
    if (num5 > max) {
        max = num5;
    }


    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    if (num4 < min) {
        min = num4;
    }
    if (num5 < min){
         min = num5;
    }

   printf("max num =  %d min num = %d \n",max,min);




    printf("question 3 \n");

/*    int num,max,min;
    printf("please enter the numbers");
    scanf("%d", &num);
    max = min = num;12
    for (int i = 1; i < 5; i++){
    scanf("%d", &num);

        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("max = %d  min = %d",max,min);
*/


    return 0;
}
