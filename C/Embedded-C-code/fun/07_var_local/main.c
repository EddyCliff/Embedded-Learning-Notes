#include <stdio.h>

//����һ���ֲ�����
//�ں����ڲ�����ģ������κ����εı������Ǿֲ�����
void myfun()
{
    int num = 100;
    num++;

    printf("num = %d\n", num);

    return ;
}

int main(int argc, char *argv[])
{
    //�ֲ�����ֻ���ڶ���ĺ����ڲ�ʹ�ã�����������Խ϶̣������������ֲ������ͻ��ͷ�
    //printf("num = %d\n", num);
    myfun();
    myfun();
    myfun();

    return 0;
}
