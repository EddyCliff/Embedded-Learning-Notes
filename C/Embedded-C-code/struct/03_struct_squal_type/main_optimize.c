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
    STU zhangsan = {1001, "����", 'B', 18};
    printf("%d - %s - %c - %d\n",zhangsan.id,zhangsan.name,\
            zhangsan.sex,zhangsan.age);

    //��ͬ���͵Ľṹ�����֮�����ֱ�Ӹ�ֵ
    STU lisi;
    lisi = zhangsan;
    printf("%d - %s - %c - %d\n",lisi.id,lisi.name,\
            lisi.sex,lisi.age);
    
    return 0;
}