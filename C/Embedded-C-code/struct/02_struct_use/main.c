#include <stdio.h>
#include <string.h>

struct stu{
    int id;
    char name[32];
    char sex;
    int age;
}zhangsan, lisi = {1002, "����", 'B', 25};

typedef struct{
    int a;
    int b;
    char c;
}MSG;

void test1()
{
    struct stu wangwu;
    struct stu zhaoliu = {1001, "����", 'B', 20};

    MSG msg1, msg2 = {100, 200, 'w'};

    //�ṹ�������ʹ��
    zhangsan.id = 1001;
    strcpy(zhangsan.name, "����");
    zhangsan.sex = 'B';
    zhangsan.age = 18;
    printf("%d - %s - %c - %d\n", zhangsan.id, zhangsan.name,\
           zhangsan.sex, zhangsan.age);

    printf("%d - %s - %c - %d\n", lisi.id, lisi.name,\
           lisi.sex, lisi.age);

    printf("%d - %s - %c - %d\n", zhaoliu.id, zhaoliu.name,\
           zhaoliu.sex, zhaoliu.age);

    printf("%d - %d - %c\n", msg2.a, msg2.b, msg2.c);
}

//�ڽṹ����Ƕ�׽ṹ��
typedef struct{
    int year;
    int month;
    int day;
}BD;

typedef struct{
    int id;
    char name[32];
    BD birthday;
}STU;

void test2()
{
    STU xiaoming;
    xiaoming.id = 1001;
    strcpy(xiaoming.name, "С��");
    //����ṹ����Ƕ�׽ṹ�壬��ֵʱ�ҵ����ڲ�ĳ�Ա�ٽ��и�ֵ
    xiaoming.birthday.year = 2002;
    xiaoming.birthday.month = 12;
    xiaoming.birthday.day = 20;

    printf("%d - %s - %d-%d-%d\n", xiaoming.id, xiaoming.name,\
           xiaoming.birthday.year, xiaoming.birthday.month,\
           xiaoming.birthday.day);

    //Ƕ�׵���ʽ���岢��ʼ��
    STU xiaoli = {1002, "С��", 2000, 1, 1};
    printf("%d - %s - %d-%d-%d\n", xiaoli.id, xiaoli.name,\
           xiaoli.birthday.year, xiaoli.birthday.month,\
           xiaoli.birthday.day);
}

int main(int argc, char *argv[])
{
    test2();

    return 0;
}
