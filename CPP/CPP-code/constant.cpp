/********************************************************************************
* @File name: constant.cpp
* @Author: EddyCliff
* @Version: 1.0
* @Date: 2023-09-10
* @Description: ����һ��C++����ʾ������ʾ��C++����Ļ����ṹ�Լ����ʹ�ú곣����const���εı�����
*               ����������һ����ʾһ���������ĺ곣�� Day ��һ����ʾһ�����·����ĳ��� month����������ǵ�ֵ��
********************************************************************************/
#include<iostream>
using namespace std;
//1.#define�곣��
#define Day 7
int main()
{
    cout << "һ���ܹ��У�"<< Day << "��" << endl;

    //2.const���εı���
    const int month = 12;
    cout << "һ�깲�У�"<< month << "�·�" << endl;
    system("pause");
    return 0;
}