#include<stdio.h>

typedef struct
{
    int id;
    char name[32];
    char sex;
    int age;
}STU;

int main(int argc, char *argv[])
{
    STU zhangsan = {1001, "张三", 'B', 18};
    printf("%d - %s - %c - %d\n",zhangsan.id,zhangsan.name,\
            zhangsan.sex,zhangsan.age);

    //相同类型的结构体变量之间可以直接赋值
    STU lisi;
    lisi = zhangsan;
    printf("%d - %s - %c - %d\n",lisi.id,lisi.name,\
            lisi.sex,lisi.age);
    
    return 0;
}