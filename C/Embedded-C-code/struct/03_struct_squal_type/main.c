#include <stdio.h>
#include <string.h>

struct stu{
    int id;
    char name[32];
    char sex;
    int age;
};

int main(int argc, char *argv[])
{
    struct stu zhangsan;
    zhangsan.id = 1001;
    strcpy(zhangsan.name, "张三");
    zhangsan.sex = 'B';
    zhangsan.age = 18;
    printf("%d - %s - %c - %d\n", zhangsan.id, zhangsan.name,\
           zhangsan.sex, zhangsan.age);


    //相同类型的结构体变量之间可以直接赋值
    struct stu lisi;
    lisi = zhangsan;
    printf("%d - %s - %c - %d\n", lisi.id, lisi.name,\
           lisi.sex, lisi.age);

    return 0;
}
