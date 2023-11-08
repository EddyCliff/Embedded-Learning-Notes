/** 
 * @file: merge_sort.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 17:01:21
 * @FilePath: /֪��MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/merge_sort.c
 * @brief: �����㷨 - �鲢���� - C����ʵ��
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */
#include<stdio.h>
#include<stdlib.h>

/** 
 * @brief �������������������ϲ�Ϊһ����������
 * @details ͨ���Ƚ�������������������Ԫ��,�����Ǻϲ�Ϊһ���������顣
 * @param {int} *nums - ����Ҫ�ϲ���Ԫ�ص�����
 * @param {int} left - �����������ʼ����
 * @param {int} mid - �е�����
 * @param {int} right - ��������Ľ�������
 * @return {*}
 * @retval �޷���ֵ
 */
void merge(int *nums, int left, int mid, int right) 
{
    // ������������ [left, mid], ������������ [mid+1, right]
    // ����һ����ʱ���� tmp , ���ڴ�źϲ���Ľ��
    int tmpSize = right - left + 1;
    int *tmp = (int *)malloc(tmpSize * sizeof(int));
    // ��ʼ����������������������ʼ����
    int i = left, j = mid + 1, k = 0;
    // �����������鶼����Ԫ��ʱ,�Ƚϲ�����С��Ԫ�ظ��Ƶ���ʱ������
    while (i <= mid && j <= right)
    {
        if (nums[i] <= nums[j]) 
        {
            tmp[k++] = nums[i++];
        } 
        else 
        {
            tmp[k++] = nums[j++];
        }
    }
    // ��������������������ʣ��Ԫ�ظ��Ƶ���ʱ������
    while (i <= mid) 
    {
        tmp[k++] = nums[i++];
    }
    while (j <= right) 
    {
        tmp[k++] = nums[j++];
    }
    // ����ʱ���� tmp �е�Ԫ�ظ��ƻ�ԭ���� nums �Ķ�Ӧ����
    for (k = 0; k < tmpSize; ++k) 
    {
        nums[left + k] = tmp[k];
    }
    // �ͷ��ڴ�
    free(tmp);
}


/** 
 * @brief �鲢����.
 *        ʹ�ù鲢�����㷨�������������.
 * @details �鲢������һ�ַ����㷨,���������Ϊ��������������,
 *          �ֱ�����ǽ�������,Ȼ�����Ǻϲ�Ϊһ����������.
 * @param {int} *nums - ����Ҫ�����Ԫ�ص�����
 * @param {int} left - �������ʼ����
 * @param {int} right - ����Ľ�������
 * @return {*}
 * @retval: Return Value description
 */
void mergeSort(int *nums, int left, int right) 
{
    // ��ֹ����
    if (left >= right)
        return; // �������鳤��Ϊ 1 ʱ��ֹ�ݹ�
    // ���ֽ׶�
    int mid = (left + right) / 2;    // �����е�
    mergeSort(nums, left, mid);      // �ݹ���������
    mergeSort(nums, mid + 1, right); // �ݹ���������
    // �ϲ��׶�
    merge(nums, left, mid, right);
}

int main() 
{
    int nums[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", nums[i]);
    }

    mergeSort(nums, 0, size - 1);

    printf("\nSorted array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}

