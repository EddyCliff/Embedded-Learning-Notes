#include<stdio.h>

//����һ��ö������
enum week
{
    mon=8, tue, wed, thu=2, fri, sat, sun
};

int main(int argc, char *argv[])
{
    //����ö�����͵ı���
    enum week day = mon;
    printf("day = %d",day);

    day = fri;
    printf("day = %d",day); 
    return 0;

}