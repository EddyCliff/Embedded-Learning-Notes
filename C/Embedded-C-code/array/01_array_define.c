#include <stdio.h>

int main(int argc, char *argv[])
{
    //定义一个一维数组
    int a[10];
    //通过sizeof关键字可以获取数组的大小
    printf("sizeof(a) = %d %d\n", sizeof(a), 10 * sizeof(int));

    //如果定义数组的同时赋值（初始化），可以不指定数组元素的个数，系统会根据初始化元素的个数自动指定数组元素的个数
    int b[] = {10, 20, 30};
    printf("sizeof(b) = %d\n", sizeof(b));

    printf("***************************\n");

    //定义一个二维数组
    int c[2][4];
    printf("sizeof(c) = %d %d\n", sizeof(c), 2 * 4 * sizeof(int));

    //二维数组的行数可以省略，但是列数不能省略，在初始化时可以这样操作
    //系统会根据列数自动指定行数，最终得到的函数所得到得元素个数移动是列的整数倍
    int d[][4] = {1, 2, 3, 4, 5};
    printf("sizeof(d) = %d\n", sizeof(d));


    return 0;
}
