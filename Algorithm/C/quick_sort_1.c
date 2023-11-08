/** 
 * @file: quick_sort_1.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 10:09:03
 * @FilePath: /֪��MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/quick_sort_1.c
 * @brief: �����㷨 - �������� - C����ʵ��
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */

#include<stdio.h>

/** 
 * @brief Ԫ�ؽ��� - �������������е�����Ԫ�ء�
 * @details ������������˸���������λ��i��j��Ԫ��
 * @param {int} nums[] - ��������
 * @param {int} i - Ҫ�����ĵ�һ��Ԫ�ص�����
 * @param {int} j - Ҫ�����ĵڶ���Ԫ�ص�����
 * @return {*}
 * @retval �޷���ֵ
 */
void swap(int nums[], int i, int j) 
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}


/** 
 * @brief ����������-�ڱ�����.
 *        ������ĵ�һ��Ԫ����Ϊ��׼ֵ��������з���.
 * @details �������ѡ��nums[left]��Ϊ��׼ֵ��������nums�����ҽ��з���,
 *          ����������Ԫ��,ʹ����С�ڻ���ڻ�׼ֵ��Ԫ��λ����࣬���д��ڻ�׼ֵ��Ԫ��λ���Ҳ�,
 *          �����ط������׼ֵԪ�ص�����.
 * @param {int} nums - Ҫ��������������.
 * @param {int} left - ������Χ�������Ԫ�ص�����.
 * @param {int} right - ������Χ�����Ҳ�Ԫ�ص�����.
 * @return {int} - �������׼Ԫ�ص�����.
 * @retval �������׼Ԫ�ص�����.
 */
int partition(int nums[], int left, int right) 
{
    // �� nums[left] ��Ϊ��׼��
    int i = left, j = right;
    while (i < j) 
    {
        while (i < j && nums[j] >= nums[left]) 
        {
            // �����������׸�С�ڻ�׼����Ԫ��
            j--;
        }
        while (i < j && nums[i] <= nums[left]) 
        {
            // �����������׸����ڻ�׼����Ԫ��
            i++;
        }
        // ����������Ԫ��
        swap(nums, i, j);
    }
    // ����׼����������������ķֽ���
    swap(nums, i, left);
    // ���ػ�׼��������
    return i;
}
 

/** 
 * @brief ����������-��������. 
 *        ��������п�������.
 * @details �ú���ʹ�ÿ��������㷨���������� nums ��������,
 *          ��ͨ��ѡ���׼�����������Ϊ����������,Ȼ��ݹ�ض��������������������.
 * @param {int} nums - Ҫ�������������.
 * @param {int} left - ��ǰ����Χ�������Ԫ�ص�����.
 * @param {int} right - ��ǰ����Χ�����Ҳ�Ԫ�ص�����.
 * @return {*}
 * @retval �޷���ֵ
 */
void quickSort(int nums[], int left, int right) 
{
    // �����鳤��Ϊ 1 ʱ��ֹ�ݹ�
    if (left >= right) 
    {
        return;
    }
    // �ڱ�����
    int pivot = partition(nums, left, right);
    // �ݹ��������顢��������
    quickSort(nums, left, pivot - 1);
    quickSort(nums, pivot + 1, right);
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

    quickSort(nums, 0, length - 1);

    printf("Sorted Array: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
