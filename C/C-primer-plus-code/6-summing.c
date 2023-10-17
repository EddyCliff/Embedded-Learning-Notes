/********************************************************************************
* @File name: 6-summing.c
* @Author: EddyCliff
* @Version: 1.0
* @Date: 2023-09-13
* @Description: 根据用户键入的整数求和
********************************************************************************/
#include<stdio.h>
int main(void)
{
    long num;
    long sum =0l;  /*把sum初始化为0*/
    int status;

    printf("Please enter an integar to be sumed ");
    printf("(q to quit): ");
    status = scanf("%ld",&num);

    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter an integar to be sumed (q to quit): ");
        status = scanf("%ld",&sum);
    }
    printf("Those integars sum to %ld.\n",sum);

    return 0;
}
