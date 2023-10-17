#include<stdio.h>

//定义一个枚举类型
enum week
{
    mon=8, tue, wed, thu=2, fri, sat, sun
};

int main(int argc, char *argv[])
{
    //定义枚举类型的变量
    enum week day = mon;
    printf("day = %d",day);

    day = fri;
    printf("day = %d",day); 
    return 0;

}