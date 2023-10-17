#include <stdio.h>

//定义一个普通全局变量
//只要是在main函数外（也在子函数外）的变量，就是全局变量
//如果全局变量没有进行初始化，则系统自动将其初始化为0
int num;

//全局变量可以在程序的任意一个位置进行对其的操作
 void myfun()
 {
     num = 888;
 }

int main(int argc, char *argv[])
{
    printf("num = %d\n", num);

    myfun();

    printf("num = %d\n", num);

    return 0;
}
