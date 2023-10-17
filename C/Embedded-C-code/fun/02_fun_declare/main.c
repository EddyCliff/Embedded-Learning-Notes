#include <stdio.h>

//函数的声明：一般当子函数在主函数的下方时，需要在主函数的上方进行声明
void myfun1();
void myfun2(int a, int b);
int myfun3(int a, int b);
int main(int argc, char *argv[])
{
    myfun1();
    return 0;
}

void myfun1()
{
    printf("hello world\n");
    printf("nihao beijing\n");
    printf("welcome to 1000phone\n");

    return ;
}

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
