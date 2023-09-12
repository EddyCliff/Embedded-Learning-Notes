/********************************************************************************
* @File name: sizeof.cpp
* @Author: EddyCliff
* @Version: 1.0
* @Date: 2023-09-10
* @Description: 
********************************************************************************/
#include<iostream>
using namespace std;
int main()
{   
    //利用sizeof求出数据类型占用内存大小
    //语法：sizeof(数据类型 / 变量)

    short num1 = 10;
    cout <<"short占用内存空间为" << sizeof(num1) << endl;
    cout <<"short占用内存空间为" << sizeof(short) << endl;
    cout <<"int占用内存空间大小为"<< sizeof(int) << endl;
    cout <<"long占用内存空间大小为"<< sizeof(long) << endl;
    cout <<"long long占用内存空间大小为"<< sizeof(long long) << endl;

    //整型大小比较：short < int <= long <= long long 
    system("pause");
    return 0;
}