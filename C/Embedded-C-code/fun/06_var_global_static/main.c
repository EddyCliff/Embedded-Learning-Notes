#include <stdio.h>

//����һ����̬ȫ�ֱ���
//��̬ȫ�ֱ���ֻ�����䶨���.c�ļ�������λ��ʹ�ã����ܿ��ļ�ʹ��
static int num;

void myfun()
{
    num++;
}

int main(int argc, char *argv[])
{
    printf("num = %d\n", num);

    myfun();

    printf("num = %d\n", num);

    return 0;
}
