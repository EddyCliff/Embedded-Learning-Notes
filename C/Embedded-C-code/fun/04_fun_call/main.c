#include <stdio.h>

void myfun1();
void myfun2(int a, int b);
int myfun3(int a, int b);
int main(int argc, char *argv[])
{
    //�����ĵ���
    //û�в���Ҳû�з���ֵ
    //ֱ��д������������Ҫ�ں��������
    myfun1();

    printf("**********************\n");

    //�в�����û�з���ֵ
    //��Ҫ�ں������ұ������д�����������������ǳ������ʽ��Ҳ�����Ǳ������ʽ
    myfun2(100, 90);

    int x = 10, y = 20;
    //x��y��ʵ�Σ�ʵ�ʲ��������ʾ����ں������õ�ʱ��ʵ�ε�ֵ���ݸ��β�
    myfun2(x, y);

    printf("**********************\n");

    //�в���Ҳ�з���ֵ
    //����ʹ��һ���������պ���ִ�н��������ֵ��������ֱ�����Ҳ����
    int n;
    n = myfun3(100, 90);
    printf("n = %d\n", n);

    printf("sum = %d\n", myfun3(90, 66));

    return 0;
}

void myfun1()
{
    printf("hello world\n");
    printf("nihao beijing\n");
    printf("welcome to 1000phone\n");

    return ;
}

//a��b���βΣ���ʽ��������Ҫ���ڱ���ʵ�δ��ݵ�ֵ�����ʸ�ʵ��û���κι�ϵ��ֻ��ֵ����
void myfun2(int a, int b)
{
    int sum;
    sum = a + b;

    printf("%d + %d = %d\n", a, b, sum);
}

int myfun3(int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}

