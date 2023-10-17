#include <stdio.h>

//定义一个静态全局变量
//静态全局变量只能在其定义的.c文件中任意位置使用，不能跨文件使用
static int num;

void myfun()
{
    num++;
}

int main(int argc, char *argv[])
{
    printf("num = %d\n", num);

    myfun();

    printf("num = %d\n", num);

    return 0;
}
