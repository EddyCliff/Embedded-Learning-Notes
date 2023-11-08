/** 
 * @file: heap_sort.c
 * @author: EddyCliff
 * @date: Do not edit
 * @LastEditTime: 2023-10-29 17:33:55
 * @FilePath: /知乎MarKdownd:/git_repositories/Embedded-Learning-Notes/Algorithm/C/heap_sort.c
 * @brief: 排序算法 - 堆排序 - C语言实现
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */
#include<stdio.h>

/* 堆的长度为 n ，从节点 i 开始，从顶至底堆化 */
/** 
 * @brief 从指定节点开始,将堆按照最大堆性质进行调整.
 * @details 从指定节点开始,将堆按照最大堆性质进行调整,
 *          保证节点的值大于等于其子节点的值,确保最大值在堆顶.
 * @param {int} nums - 包含堆元素的数组
 * @param {int} n - 堆的长度
 * @param {int} i - 堆化的起始节点的索引
 * @return {*}
 * @retval 无返回值
 */
void siftDown(int nums[], int n, int i) 
{
    while (1) 
    {
        // 判断节点 i, l, r 中值最大的节点，记为 ma
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int ma = i;
        if (l < n && nums[l] > nums[ma])
            ma = l;
        if (r < n && nums[r] > nums[ma])
            ma = r;
        // 若节点 i 最大或索引 l, r 越界，则无须继续堆化，跳出
        if (ma == i) 
        {
            break;
        }
        // 交换两节点
        int temp = nums[i];
        nums[i] = nums[ma];
        nums[ma] = temp;
        // 循环向下堆化
        i = ma;
    }
}

/* 堆排序 */
/** 
 * @brief 对数组进行堆排序
 * @details 使用堆排序算法对数组进行排序,首先构建最大堆,然后反复将堆顶元素与堆的最后一个元素交换,
 *          然后维护剩余元素的堆的性质,重复此过程直到整个数组有序.
 * @param {int} nums - 包含要排序的元素的数组
 * @param {int} n - 数组的长度
 * @return {*}
 * @retval 无返回值
 */
void heapSort(int nums[], int n) 
{
    // 建堆操作：堆化除叶节点以外的其他所有节点
    for (int i = n / 2 - 1; i >= 0; --i) 
    {
        siftDown(nums, n, i);
    }
    // 从堆中提取最大元素，循环 n-1 轮
    for (int i = n - 1; i > 0; --i)
    {
        // 交换根节点与最右叶节点（即交换首元素与尾元素）
        int tmp = nums[0];
        nums[0] = nums[i];
        nums[i] = tmp;
        // 以根节点为起点，从顶至底进行堆化
        siftDown(nums, i, 0);
    }
}
