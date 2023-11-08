/** 
 * @file: bubble_sort.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 15:43:17
 * @FilePath: /֪��MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/bubble_sort.c
 * @brief: �����㷨 - ð������ - C����ʵ��
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */

#include<stdio.h>
/** 
 * @brief ð�������㷨(����־λ�Ż�)
 * @details ð��������һ�ּ򵥵������㷨,��ͨ���ظ��ر�������,�Ƚ����ڵ�����Ԫ��,
 *          ������Ҫ��ʱ�򽻻����ǵ�λ��,ֱ��������������Ϊֹ.
 *          ����־λ���Ż���Ϊ����ǰ��������,��һ��������û�з����κν�������ʱ,�����ж������Ѿ�����,
 *          �����ټ�������,�Ӷ��������.
 * @param {int} nums[] Ҫ���������
 * @param {int} size ����Ĵ�С
 * @return {*}
 * @retval �޷���ֵ
 */
void bubbleSortWithFlag(int nums[], int size) 
{
    // ��ѭ��:δ��������Ϊ [0, i]
    for (int i = 0; i < size - 1; i++) 
    {
        int isFalse = 0;
        // ��ѭ��:��δ�������� [0, i] �е����Ԫ�ؽ���������������Ҷ�
        for (int j = 0; j < size - 1 - i; j++) 
        {
            if (nums[j] > nums[j + 1]) 
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                isFalse = 1;
            }
        }
        //��isFalse = 0,��һ��������û�з����κν�������ʱ,�����ж������Ѿ�����,ֱ���˳�����.
        if (!isFalse)
        {
            break;
        }
    }
}

int main() 
{
    int nums[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    bubbleSortWithFlag(nums, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
