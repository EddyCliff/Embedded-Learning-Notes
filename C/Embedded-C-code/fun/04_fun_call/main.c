#include <stdio.h>

void myfun1();
void myfun2(int a, int b);
int myfun3(int a, int b);
int main(int argc, char *argv[])
{
    //函数的调用
    //没有参数也没有返回值
    //直接写函数名，并且要在后面加括号
    myfun1();

    printf("**********************\n");

    //有参数，没有返回值
    //需要在函数名右边括号中传入参数，参数可以是常量表达式，也可以是变量表达式
    myfun2(100, 90);

    int x = 10, y = 20;
    //x、y：实参，实际参数，本质就是在函数调用的时候将实参的值传递给形参
    myfun2(x, y);

    printf("**********************\n");

    //有参数也有返回值
    //可以使用一个变量接收函数执行结果（返回值），或者直接输出也可以
    int n;
    n = myfun3(100, 90);
    printf("n = %d\n", n);

    printf("sum = %d\n", myfun3(90, 66));

    return 0;
}

void myfun1()
{
    printf("hello world\n");
    printf("nihao beijing\n");
    printf("welcome to 1000phone\n");

    return ;
}

//a、b：形参，形式参数，主要用于保存实参传递的值，本质跟实参没有任何关系，只是值传递
void myfun2(int a, int b)
{
    int sum;
    sum = a + b;

    printf("%d + %d = %d\n", a, b, sum);
}

int myfun3(int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}

