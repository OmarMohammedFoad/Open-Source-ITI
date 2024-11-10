#include <stdio.h>
#include <stdlib.h>

int main()
{

int eval [3][4] = {{}};
    int sum =0;
    int avg =0;

    int totalSum[3] = {};

    int grade;
        for(int row=0;row<3;row++){
        printf("student number = %d \n",row);

        for(int col=0;col<4;col++){


            scanf("%d",&eval[row][col]);
        }
    }


    printf("\n");

/**
row col sum
0   0   0
    1
*/
    for(int row=0;row<3;row++){
            sum = 0;
        for(int col=0;col<4;col++){
            sum = sum + eval[row][col];
        }

        printf("the total for student=%d sum =%d \n",row,sum);
    }




    printf("\n");




/*
 subject student sum
    0     0       25
    eval[ 0][0]
        [0][1]

*/


for(int col=0;col<4;col++){
            sum = 0;
        for(int row=0;row<3;row++){
            sum = sum +eval[row][col];
        }

        printf("the total for subject=%d avg =%d \n",col,sum/3);

    }








    return 0;
}
