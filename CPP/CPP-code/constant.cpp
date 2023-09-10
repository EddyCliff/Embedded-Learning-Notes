/********************************************************************************
* @File name: constant.cpp
* @Author: EddyCliff
* @Version: 1.0
* @Date: 2023-09-10
* @Description: 这是一个C++程序示例，演示了C++程序的基本结构以及如何使用宏常量和const修饰的变量。
*               本程序定义了一个表示一周总天数的宏常量 Day 和一个表示一年总月份数的常量 month，并输出它们的值。
********************************************************************************/
#include<iostream>
using namespace std;
//1.#define宏常量
#define Day 7
int main()
{
    cout << "一周总共有："<< Day << "天" << endl;

    //2.const修饰的变量
    const int month = 12;
    cout << "一年共有："<< month << "月份" << endl;
    system("pause");
    return 0;
}