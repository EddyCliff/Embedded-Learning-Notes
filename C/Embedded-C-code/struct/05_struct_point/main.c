#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu{
    int id;
    char name[32];
    char sex;
    int age;
};

int main(int argc, char *argv[])
{
    //定义一个结构体指针变量
    struct stu *s;
    //在堆区开辟结构体空间并将其地址保存在结构体指针变量中
    s = (struct stu *)malloc(sizeof(struct stu));

    s->id = 1001;
    strcpy(s->name, "张三");
    s->sex = 'B';
    s->age = 20;

    printf("%d - %s - %c - %d\n", s->id, s->name, s->sex, s->age);

    return 0;
}
