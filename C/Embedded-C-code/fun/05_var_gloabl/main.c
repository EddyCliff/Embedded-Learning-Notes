#include <stdio.h>

//����һ����ͨȫ�ֱ���
//ֻҪ����main�����⣨Ҳ���Ӻ����⣩�ı���������ȫ�ֱ���
//���ȫ�ֱ���û�н��г�ʼ������ϵͳ�Զ������ʼ��Ϊ0
int num;

//ȫ�ֱ��������ڳ��������һ��λ�ý��ж���Ĳ���
 void myfun()
 {
     num = 888;
 }

int main(int argc, char *argv[])
{
    printf("num = %d\n", num);

    myfun();

    printf("num = %d\n", num);

    return 0;
}
