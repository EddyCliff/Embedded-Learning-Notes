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
    //����һ���ṹ��ָ�����
    struct stu *s;
    //�ڶ������ٽṹ��ռ䲢�����ַ�����ڽṹ��ָ�������
    s = (struct stu *)malloc(sizeof(struct stu));

    s->id = 1001;
    strcpy(s->name, "����");
    s->sex = 'B';
    s->age = 20;

    printf("%d - %s - %c - %d\n", s->id, s->name, s->sex, s->age);

    return 0;
}
