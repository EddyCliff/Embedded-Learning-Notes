#include <stdio.h>

//����һ����̬�ֲ�����
//�ں����ڲ������ʹ��static���εı������Ǿ�̬�ֲ�����

void myfun()
{
    //�����ͨ�ֲ����������г�ʼ������Ĭ�������ֵ
    //�����̬�ֲ����������г�ʼ������Ĭ����0
    int a; //��ͨ�ֲ�����
    static int num; //��̬�ֲ�����

    printf("a = %d\n", a);
    printf("num = %d\n", num);
}

void myfun1()
{
    //��̬�ֲ������������ŵ�ǰ����ִ�н������ͷſռ䣬�´�ʹ�õĺ���֮ǰ�Ŀռ�
    //��̬�ֲ�����ֻ���ʼ��һ��
    static int num1 = 100;
    num1++;

    printf("num1 = %d\n", num1);
}

int main(int argc, char *argv[])
{
    myfun();

    myfun1();
    myfun1();
    myfun1();

    return 0;
}
