/** 
 * @file: quick_sort_2.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 15:19:24
 * @FilePath: /֪��MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/quick_sort_2.c
 * @brief: �����㷨 - �������� - C����ʵ��
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */

#include<stdio.h>
#define Mytype int


/** 
 * @brief ���������㷨
 * @details ��������ͨ�����ε�˼�뽫����ֳ�������,һ����С�ڹؼ�ֵ(key),һ���ִ��ڹؼ�ֵ.
 *          Ȼ��ݹ���������ֽ�������,��������������������.
 * @param {Mytype} arr - Ҫ���������.
 * @param {int} left - ��ǰ����Χ�������Ԫ�ص�����.
 * @param {int} right - ��ǰ����Χ�����Ҳ�Ԫ�ص�����.
 * @return {*}
 * @retval ����������
 */
void QuickSort(Mytype arr[],int left,int right)
{
    int i = left;
    int j = right;
    Mytype key = arr[left];
    if (left >= right)
    {
        return;
    }
    while (i < j)
    {
        //����������һ����keyС��Ԫ��,��i����.
        while (i < right && arr[j] >= key)
        {
            j--;
        }
        //������ʱ��˵��,�ҵ���С��key����,��i����.
        arr[i] = arr[j];
        //����������һ����key���Ԫ��,��j����.
        while (i < j && arr[i] <= key)
        {
            i++;
        }
        //������ʱ��˵��,�ҵ��˴���key����,��j����.
        arr[j]  = arr[i];
    }
    //��i = j����,��key�ŵ����ʵ�λ��.
    arr[i]  = key;
    //��������ʣ�µ�
    QuickSort(arr,left,i-1);
    QuickSort(arr,i+1,right);
}

int main() 
{
    int nums[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int length = sizeof(nums) / sizeof(nums[0]);

    printf("Original Array: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    QuickSort(nums, 0, length - 1);

    printf("Sorted Array: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}