/********************************************************************************
* @File name: 6-summing.c
* @Author: EddyCliff
* @Version: 1.0
* @Date: 2023-09-13
* @Description: �����û�������������
********************************************************************************/
#include<stdio.h>
int main(void)
{
    long num;
    long sum =0l;  /*��sum��ʼ��Ϊ0*/
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
