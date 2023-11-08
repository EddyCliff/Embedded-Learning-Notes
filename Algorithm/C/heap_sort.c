/** 
 * @file: heap_sort.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 17:33:55
 * @FilePath: /֪��MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/heap_sort.c
 * @brief: �����㷨 - ������ - C����ʵ��
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */
#include<stdio.h>

/* �ѵĳ���Ϊ n ���ӽڵ� i ��ʼ���Ӷ����׶ѻ� */
/** 
 * @brief ��ָ���ڵ㿪ʼ,���Ѱ����������ʽ��е���.
 * @details ��ָ���ڵ㿪ʼ,���Ѱ����������ʽ��е���,
 *          ��֤�ڵ��ֵ���ڵ������ӽڵ��ֵ,ȷ�����ֵ�ڶѶ�.
 * @param {int} nums - ������Ԫ�ص�����
 * @param {int} n - �ѵĳ���
 * @param {int} i - �ѻ�����ʼ�ڵ������
 * @return {*}
 * @retval �޷���ֵ
 */
void siftDown(int nums[], int n, int i) 
{
    while (1) 
    {
        // �жϽڵ� i, l, r ��ֵ���Ľڵ㣬��Ϊ ma
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int ma = i;
        if (l < n && nums[l] > nums[ma])
            ma = l;
        if (r < n && nums[r] > nums[ma])
            ma = r;
        // ���ڵ� i �������� l, r Խ�磬����������ѻ�������
        if (ma == i) 
        {
            break;
        }
        // �������ڵ�
        int temp = nums[i];
        nums[i] = nums[ma];
        nums[ma] = temp;
        // ѭ�����¶ѻ�
        i = ma;
    }
}

/* ������ */
/** 
 * @brief ��������ж�����
 * @details ʹ�ö������㷨�������������,���ȹ�������,Ȼ�󷴸����Ѷ�Ԫ����ѵ����һ��Ԫ�ؽ���,
 *          Ȼ��ά��ʣ��Ԫ�صĶѵ�����,�ظ��˹���ֱ��������������.
 * @param {int} nums - ����Ҫ�����Ԫ�ص�����
 * @param {int} n - ����ĳ���
 * @return {*}
 * @retval �޷���ֵ
 */
void heapSort(int nums[], int n) 
{
    // ���Ѳ������ѻ���Ҷ�ڵ�������������нڵ�
    for (int i = n / 2 - 1; i >= 0; --i) 
    {
        siftDown(nums, n, i);
    }
    // �Ӷ�����ȡ���Ԫ�أ�ѭ�� n-1 ��
    for (int i = n - 1; i > 0; --i)
    {
        // �������ڵ�������Ҷ�ڵ㣨��������Ԫ����βԪ�أ�
        int tmp = nums[0];
        nums[0] = nums[i];
        nums[i] = tmp;
        // �Ը��ڵ�Ϊ��㣬�Ӷ����׽��жѻ�
        siftDown(nums, i, 0);
    }
}
