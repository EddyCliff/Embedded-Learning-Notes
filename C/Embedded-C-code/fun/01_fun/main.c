#include <stdio.h>

//����һ��û�в���Ҳû�з���ֵ�ĺ���
void myfun1()
{
    printf("hello world\n");
    printf("nihao beijing\n");
    printf("welcome to 1000phone\n");

    return ;
}

//����һ���в����ĺ���
void myfun2(int a, int b)
{
    int sum;
    sum = a + b;

    printf("%d + %d = %d\n", a, b, sum);
}

//����һ���з���ֵ�ĺ���
int myfun3(int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}

int main(int argc, char *argv[])
{
    //�����ĵ���
    //�����ڵ��õ�ʱ�����û�в�����Ҳ���������
    //�������õ�ʱ���ܼӷ���ֵ����
    myfun1();

    return 0;
}
