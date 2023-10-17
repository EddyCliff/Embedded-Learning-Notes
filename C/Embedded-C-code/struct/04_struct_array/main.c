#include <stdio.h>

typedef struct{
    int num;
    char name[20];
    float score;
}STU;

int main(int argc, char *argv[])
{
    //定义一个结构体数组
    STU edu[3] = {
        {101,"Lucy",78},
        {102,"Bob",59.5},
        {103,"Tom",85}
    };

    //输出结构体数组中的元素
    int j;
    for(j = 0; j < 3; j++)
    {
        printf("%d - %s - %.2f\n", edu[j].num, edu[j].name,\
               edu[j].score);
    }

    int i;
    float sum=0;
    for(i = 0; i < 3; i++)
    {
        sum += edu[i].score;
    }

    printf("平均成绩为%.2f\n",sum / 3);

    return 0;
}
