#include<stdio.h>

//����ṹ������
struct stu{
    int id;
    char name[32];
    char sex;
    int age;
    //����ṹ�����֮����ṹ�����͵�ͬʱ����ṹ�����
}zhangsan, lisi = {1002, "lisi", 'B', 25};

//ʹ��typedef�Խṹ������ȡ����
typedef struct{
    int a;
    int b;
    char c;
}MSG;

int main(int argc, char *argv[])
{
    //����ṹ�����֮���Ͷ������֮�������
    struct stu wangwu;
    //�ṹ������ĳ�ʼ��
    struct stu zhaoliu = {1001, "zhaoliu", 'B', 20};

    //���ʹ��typedef�Խṹ������ȡ����
    //���޷��ڶ������͵�ͬʱ����ṹ�����
    //�ڶ���ṹ�������ͬʱ���ü�struct
    MSG msg1, msg2 = {100, 200, 'w'};

}