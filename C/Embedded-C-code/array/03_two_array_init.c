#include <stdio.h>

int main(int argc, char *argv[])
{
    //二维数组的初始化
    //int a[2][3];

    //初始化方式1：按行初始化
    //全部初始化
    //int a[2][3] = {{10, 20, 30}, {666, 777, 888}};
    //局部初始化
    //没有赋值的位置的元素自动为0
    //int a[2][3] = {{10, 20}, {666}};

    //初始化方式2：逐个初始化
    //全部初始化
    //int a[2][3] = {1, 2, 3, 4, 5, 6};
    //局部初始化
    //没有赋值的位置的元素自动为0
    int a[2][3] = {1, 2, 3};

    printf("%d\n", a[0][0]);
    printf("%d\n", a[0][1]);
    printf("%d\n", a[0][2]);
    printf("%d\n", a[1][0]);
    printf("%d\n", a[1][1]);
    printf("%d\n", a[1][2]);

    return 0;
}
