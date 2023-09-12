
- [C++基础入门](#c基础入门)
  - [1. C++初识](#1-c初识)
    - [1.1 第1个C++程序](#11-第1个c程序)
    - [1.2 程序的注释](#12-程序的注释)
    - [1.3 变量](#13-变量)
    - [1.4 常量](#14-常量)
    - [1.5 关键字](#15-关键字)
    - [1.6 标识符命名规则](#16-标识符命名规则)
  - [2. 数据类型](#2-数据类型)
    - [2.1 整型](#21-整型)
    - [2.2 sizeof关键字](#22-sizeof关键字)
    - [2.3 实型（浮点型）](#23-实型浮点型)

## C++基础入门

### 1. C++初识

#### 1.1 第1个C++程序

文件位置：[Helloworld.cpp](CPP-code/Helloworld.cpp)

```C++
/********************************************************************************
* @File name: Helloworld.cpp
* @Author: EddyCliff
* @Version: 1.0
* @Date: 2023-09-09
* @Description: This is a simple "Hello World" program in C++.
*               It demonstrates the basic structure of a C++ program.
********************************************************************************/
#include<iostream>
using namespace std;
int main()
{
  cout << "Hello world" << endl;
  system("pause");
  
  return 0;

}
```



#### 1.2 程序的注释 

**作用**：在代码中做一些说明和解释

**两种格式**

1. 单行注释`//描述信息`

    - 通常放在一行代码的上方，或者一条语句的结尾，对该代码进行说明。

1. 多行注释

    - 通常放在一段代码的上方，对该段代码做整体说明。

> 提示：编译器在编译代码时，会忽略注释的内容。



#### 1.3 变量

**作用**：给一段指定的空间起名，方便操作这段内存

**语法**：数据类型 变量名 = 初始值;

**变量存在的意义**：方便我们管理内存空间

> 文件位置：[variable.cpp](CPP-code/variable.cpp)

```C++
/********************************************************************************
* @File name: variable.cpp
* @Author: EddyCliff
* @Version: 1.0
* @Date: 2023-09-09
* @Description: This C++ program demonstrates the use of variables.
*               It initializes an integer variable 'a' with the value 10
*               and then prints the value to the console.
********************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "a = " << a << endl;
    system("pause");
    return 0;
}
```



#### 1.4 常量

**作用**：用于记录程序中不可更改的数据

C++定义常量常用两种方式

1. #define 宏常量：`#define 常量名 常量值`

    - 通常在文件上方定义，表示一个常量

1. const 修饰的变量

    - 通常在变量定义前加关键字const，修饰该变量为常量，不可修改

> 文件位置：[constant.cpp](CPP-code/constant.cpp)

```C++
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
```



#### 1.5 关键字

**作用**：关键字是C++预先保留的单词（标识符）

- 在定义变量或者常量时，不要用关键字。



#### 1.6 标识符命名规则

**作用**：C++规定给标识符（变量，常量）命名时，有一套自己的规则。

- 标识符不能是关键字

- 标识符只能由字母，数字，下划线组成

- 第一个字母必须为字母或下划线

- 标识符中字母区分大小写

> 建议：给标识符命名时，争取做到见名知意的效果，方便自己和他人的阅读。



### 2. 数据类型

C++规定在创建一个变量或常量时，必须给出相应的数据类型，否则无法给变量分配内存。

#### 2.1 整型

作用：整型变量表示的是整数类型的数据。

C++中能够表示整数的类型有以下几种方式，区别在于所占内存空间不同。

|数据类型|占用空间|取值范围|
|-|-|-|
|short（短整型）|2字节|（-2^15-2^15-1）|
|int（整型）|4字节|（-2^31-2^31-1）|
|long（长整型）|windows为4字节，Linux为4字节（32位），8字节（64位）|（-2^31-2^31-1）|
|long long（长整型）|8字节|（-2^63-2^63-1）|



#### 2.2 sizeof关键字

**作用**：利用sizeof关键字可以统计数据类型所占内存大小

**语法**：`sizeof（数据类型/变量）`

> 文件位置：[sizeof.cpp](CPP-code/sizeof.cpp)

```C++
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

    system("pause");
    return 0;
}
```

> 整型大小比较：short < int <= long <= long long



#### 2.3 实型（浮点型）

作用：表示小数

浮点型变量分为两种：

1. 单精度float

2. 双精度double

两者的区别在于表示的有效数字范围不同

|数据类型|占用空间|
|-|-|
|float ||
|double||



