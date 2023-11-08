/** 
 * @file: quick_sort_2.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 15:19:24
 * @FilePath: /知乎MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/quick_sort_2.c
 * @brief: 排序算法 - 快速排序 - C语言实现
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */

#include<stdio.h>
#define Mytype int


/** 
 * @brief 快速排序算法
 * @details 快速排序通过分治的思想将数组分成两部分,一部分小于关键值(key),一部分大于关键值.
 *          然后递归对这两部分进行排序,最终完成整个数组的排序.
 * @param {Mytype} arr - 要排序的数组.
 * @param {int} left - 当前排序范围内最左侧元素的索引.
 * @param {int} right - 当前排序范围内最右侧元素的索引.
 * @return {*}
 * @retval 排序后的数组
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
        //从右向左找一个比key小的元素,和i交换.
        while (i < right && arr[j] >= key)
        {
            j--;
        }
        //跳出的时候说明,找到了小于key的数,和i交换.
        arr[i] = arr[j];
        //从左向右找一个比key大的元素,和j交换.
        while (i < j && arr[i] <= key)
        {
            i++;
        }
        //跳出的时候说明,找到了大于key的数,和j交换.
        arr[j]  = arr[i];
    }
    //当i = j跳出,把key放到合适的位置.
    arr[i]  = key;
    //继续排序剩下的
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