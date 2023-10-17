#include <stdio.h>

//定义一个静态局部变量
//在函数内部定义的使用static修饰的变量就是静态局部变量

void myfun()
{
    //如果普通局部变量不进行初始化，则默认是随机值
    //如果静态局部变量不进行初始化，则默认是0
    int a; //普通局部变量
    static int num; //静态局部变量

    printf("a = %d\n", a);
    printf("num = %d\n", num);
}

void myfun1()
{
    //静态局部变量不会随着当前函数执行结束而释放空间，下次使用的函数之前的空间
    //静态局部变量只会初始化一次
    static int num1 = 100;
    num1++;

    printf("num1 = %d\n", num1);
}

int main(int argc, char *argv[])
{
    myfun();

    myfun1();
    myfun1();
    myfun1();

    return 0;
}
