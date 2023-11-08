/** 
 * @file: merge_sort.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 17:01:21
 * @FilePath: /知乎MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/merge_sort.c
 * @brief: 排序算法 - 归并排序 - C语言实现
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */
#include<stdio.h>
#include<stdlib.h>

/** 
 * @brief 将左子数组和右子数组合并为一个有序数组
 * @details 通过比较左子数组和右子数组的元素,将它们合并为一个有序数组。
 * @param {int} *nums - 包含要合并的元素的数组
 * @param {int} left - 左子数组的起始索引
 * @param {int} mid - 中点索引
 * @param {int} right - 右子数组的结束索引
 * @return {*}
 * @retval 无返回值
 */
void merge(int *nums, int left, int mid, int right) 
{
    // 左子数组区间 [left, mid], 右子数组区间 [mid+1, right]
    // 创建一个临时数组 tmp , 用于存放合并后的结果
    int tmpSize = right - left + 1;
    int *tmp = (int *)malloc(tmpSize * sizeof(int));
    // 初始化左子数组和右子数组的起始索引
    int i = left, j = mid + 1, k = 0;
    // 当左右子数组都还有元素时,比较并将较小的元素复制到临时数组中
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
    // 将左子数组和右子数组的剩余元素复制到临时数组中
    while (i <= mid) 
    {
        tmp[k++] = nums[i++];
    }
    while (j <= right) 
    {
        tmp[k++] = nums[j++];
    }
    // 将临时数组 tmp 中的元素复制回原数组 nums 的对应区间
    for (k = 0; k < tmpSize; ++k) 
    {
        nums[left + k] = tmp[k];
    }
    // 释放内存
    free(tmp);
}


/** 
 * @brief 归并排序.
 *        使用归并排序算法对数组进行排序.
 * @details 归并排序是一种分治算法,它将数组分为左右两个子数组,
 *          分别对它们进行排序,然后将它们合并为一个有序数组.
 * @param {int} *nums - 包含要排序的元素的数组
 * @param {int} left - 数组的起始索引
 * @param {int} right - 数组的结束索引
 * @return {*}
 * @retval: Return Value description
 */
void mergeSort(int *nums, int left, int right) 
{
    // 终止条件
    if (left >= right)
        return; // 当子数组长度为 1 时终止递归
    // 划分阶段
    int mid = (left + right) / 2;    // 计算中点
    mergeSort(nums, left, mid);      // 递归左子数组
    mergeSort(nums, mid + 1, right); // 递归右子数组
    // 合并阶段
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

