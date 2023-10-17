#include<stdio.h>

//定义结构体类型
struct stu{
    int id;
    char name[32];
    char sex;
    int age;
    //定义结构体变量之定义结构体类型的同时定义结构体变量
}zhangsan, lisi = {1002, "lisi", 'B', 25};

//使用typedef对结构体类型取别名
typedef struct{
    int a;
    int b;
    char c;
}MSG;

int main(int argc, char *argv[])
{
    //定义结构体变量之类型定义完毕之后定义变量
    struct stu wangwu;
    //结构体变量的初始化
    struct stu zhaoliu = {1001, "zhaoliu", 'B', 20};

    //如果使用typedef对结构体类型取别名
    //就无法在定义类型的同时定义结构体变量
    //在定义结构体变量的同时不用加struct
    MSG msg1, msg2 = {100, 200, 'w'};

}