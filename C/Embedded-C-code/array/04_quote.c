#include<stdio.h>

int main(int argc, char *argv[])
{
    //一维数组的引用以及一维数组的遍历
    int a[6] = {111, 222, 333, 444, 555, 666};

    a[3] = 10000;

    //一维数组的遍历
    int i;
    for(i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("**********************\n");

    //二维数组的引用以及二维数组的遍历
    int b[3][4] = {1, 2, 3, 4,
                  5, 6, 7, 8,
                  9, 10, 11, 12};

    b[2][0] = 666;

    //二维数组的遍历
    int m, n;
    //外层循环控制行数
    for(m = 0; m < 3; m++)
    {
        //内层循环控制列数
        for(n = 0; n < 4; n++)
        {
            printf("%-4d", b[m][n]);
        }
        printf("\n");
    }

    return 0;
}