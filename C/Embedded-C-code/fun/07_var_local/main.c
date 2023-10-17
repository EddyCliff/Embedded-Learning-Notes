#include <stdio.h>

//定义一个局部变量
//在函数内部定义的，不加任何修饰的变量都是局部变量
void myfun()
{
    int num = 100;
    num++;

    printf("num = %d\n", num);

    return ;
}

int main(int argc, char *argv[])
{
    //局部变量只能在定义的函数内部使用，声明周期相对较短，函数结束，局部变量就会释放
    //printf("num = %d\n", num);
    myfun();
    myfun();
    myfun();

    return 0;
}
