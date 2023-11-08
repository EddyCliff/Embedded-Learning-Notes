/** 
 * @file: quick_sort_1.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 10:09:03
 * @FilePath: /知乎MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/quick_sort_1.c
 * @brief: 排序算法 - 快速排序 - C语言实现
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */

#include<stdio.h>

/** 
 * @brief 元素交换 - 交换整数数组中的两个元素。
 * @details 这个函数交换了给定数组中位置i和j的元素
 * @param {int} nums[] - 整数数组
 * @param {int} i - 要交换的第一个元素的索引
 * @param {int} j - 要交换的第二个元素的索引
 * @return {*}
 * @retval 无返回值
 */
void swap(int nums[], int i, int j) 
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}


/** 
 * @brief 快速排序类-哨兵划分.
 *        以数组的第一个元素作为基准值对数组进行分区.
 * @details 这个函数选择nums[left]作为基准值，将数组nums从左到右进行分区,
 *          它重新排列元素,使所有小于或等于基准值的元素位于左侧，所有大于基准值的元素位于右侧,
 *          它返回分区后基准值元素的索引.
 * @param {int} nums - 要分区的整数数组.
 * @param {int} left - 分区范围内最左侧元素的索引.
 * @param {int} right - 分区范围内最右侧元素的索引.
 * @return {int} - 分区后基准元素的索引.
 * @retval 分区后基准元素的索引.
 */
int partition(int nums[], int left, int right) 
{
    // 以 nums[left] 作为基准数
    int i = left, j = right;
    while (i < j) 
    {
        while (i < j && nums[j] >= nums[left]) 
        {
            // 从右向左找首个小于基准数的元素
            j--;
        }
        while (i < j && nums[i] <= nums[left]) 
        {
            // 从左向右找首个大于基准数的元素
            i++;
        }
        // 交换这两个元素
        swap(nums, i, j);
    }
    // 将基准数交换至两子数组的分界线
    swap(nums, i, left);
    // 返回基准数的索引
    return i;
}
 

/** 
 * @brief 快速排序类-快速排序. 
 *        对数组进行快速排序.
 * @details 该函数使用快速排序算法对整数数组 nums 进行排序,
 *          它通过选择基准数并将数组分为两个子数组,然后递归地对这两个子数组进行排序.
 * @param {int} nums - 要排序的整数数组.
 * @param {int} left - 当前排序范围内最左侧元素的索引.
 * @param {int} right - 当前排序范围内最右侧元素的索引.
 * @return {*}
 * @retval 无返回值
 */
void quickSort(int nums[], int left, int right) 
{
    // 子数组长度为 1 时终止递归
    if (left >= right) 
    {
        return;
    }
    // 哨兵划分
    int pivot = partition(nums, left, right);
    // 递归左子数组、右子数组
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
