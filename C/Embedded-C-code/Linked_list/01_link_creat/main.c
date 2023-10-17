#include<stdio.h>

typedef struct student
{
    //Êı¾İÓò
    int num;
    int score;
    char name[20];

    //Ö¸ÕëÓò
    struct student *next;
}STU;
