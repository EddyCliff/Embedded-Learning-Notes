/** 
 * @file: bubble_sort.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 15:43:17
 * @FilePath: /知乎MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/bubble_sort.c
 * @brief: 排序算法 - 冒泡排序 - C语言实现
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */

#include<stdio.h>
/** 
 * @brief 冒泡排序算法(带标志位优化)
 * @details 冒泡排序是一种简单的排序算法,它通过重复地遍历数组,比较相邻的两个元素,
 *          并在需要的时候交换它们的位置,直到整个数组有序为止.
 *          带标志位的优化是为了提前结束排序,当一轮排序中没有发生任何交换操作时,可以判断数组已经有序,
 *          无需再继续排序,从而提高性能.
 * @param {int} nums[] 要排序的数组
 * @param {int} size 数组的大小
 * @return {*}
 * @retval 无返回值
 */
void bubbleSortWithFlag(int nums[], int size) 
{
    // 外循环:未排序区间为 [0, i]
    for (int i = 0; i < size - 1; i++) 
    {
        int isFalse = 0;
        // 内循环:将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
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
        //当isFalse = 0,即一轮排序中没有发生任何交换操作时,可以判断数组已经有序,直接退出排序.
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
