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
    //����sizeof�����������ռ���ڴ��С
    //�﷨��sizeof(�������� / ����)

    short num1 = 10;
    cout <<"shortռ���ڴ�ռ�Ϊ" << sizeof(num1) << endl;
    cout <<"shortռ���ڴ�ռ�Ϊ" << sizeof(short) << endl;
    cout <<"intռ���ڴ�ռ��СΪ"<< sizeof(int) << endl;
    cout <<"longռ���ڴ�ռ��СΪ"<< sizeof(long) << endl;
    cout <<"long longռ���ڴ�ռ��СΪ"<< sizeof(long long) << endl;

    //���ʹ�С�Ƚϣ�short < int <= long <= long long 
    system("pause");
    return 0;
}