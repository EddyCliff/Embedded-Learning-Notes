#include<stdio.h>

typedef struct student
{
    //������
    int num;
    int score;
    char name[20];

    //ָ����
    struct student *next;
}STU;
