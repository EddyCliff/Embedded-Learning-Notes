#include <stdio.h>

//定义一个没有参数也没有返回值的函数
void myfun1()
{
    printf("hello world\n");
    printf("nihao beijing\n");
    printf("welcome to 1000phone\n");

    return ;
}

//定义一个有参数的函数
void myfun2(int a, int b)
{
    int sum;
    sum = a + b;

    printf("%d + %d = %d\n", a, b, sum);
}

//定义一个有返回值的函数
int myfun3(int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}

int main(int argc, char *argv[])
{
    //函数的调用
    //函数在调用的时候如果没有参数，也必须加括号
    //函数调用的时候不能加返回值类型
    myfun1();

    return 0;
}
