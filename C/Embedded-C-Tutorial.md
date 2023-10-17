- [第二章 数组](#第二章-数组)
  - [一、数组的概念](#一数组的概念)
  - [二、数组的分类](#二数组的分类)
    - [2.1 按元素的类型分类](#21-按元素的类型分类)
    - [2.2 按维数分类](#22-按维数分类)
  - [三、数组的定义](#三数组的定义)
    - [3.1 一维数组的定义](#31-一维数组的定义)
    - [3.2 二维数组的定义](#32-二维数组的定义)
  - [四、定义并初始化](#四定义并初始化)
    - [4.1 一维数组的初始化](#41-一维数组的初始化)
    - [4.2 二维数组的初始化](#42-二维数组的初始化)
  - [五、数组元素的引用方法](#五数组元素的引用方法)
  - [六、字符数组的定义和初始化问题](#六字符数组的定义和初始化问题)
- [第三章 函数](#第三章-函数)
  - [一、函数的概念](#一函数的概念)
  - [二、函数的分类](#二函数的分类)
  - [四、函数的声明](#四函数的声明)
  - [五、函数的调用](#五函数的调用)
  - [六、函数总结](#六函数总结)
  - [七、变量的存储类别](#七变量的存储类别)
    - [7.1 内存的分区](#71-内存的分区)
    - [7.2 普通的全局变量](#72-普通的全局变量)
    - [7.3 静态全局变量](#73-静态全局变量)
    - [7.4 普通的局部变量](#74-普通的局部变量)
    - [7.5 静态的局部变量](#75-静态的局部变量)
    - [7.6 外部函数](#76-外部函数)
    - [7.7 内部函数](#77-内部函数)
- [第四章 预处理](#第四章-预处理)
  - [一、C语言编译过程](#一c语言编译过程)
  - [二、include](#二include)
  - [三、define](#三define)
    - [1、不带参宏](#1不带参宏)
    - [2、带参宏](#2带参宏)
    - [3、带参宏和带参函数的区别](#3带参宏和带参函数的区别)
  - [四、选择性编译](#四选择性编译)
- [第五章 指针](#第五章-指针)
  - [一、关于内存那点事](#一关于内存那点事)
  - [二、指针的相关概念](#二指针的相关概念)
  - [三、指针的定义方法](#三指针的定义方法)
  - [四、指针的分类](#四指针的分类)
  - [五、指针和变量的关系](#五指针和变量的关系)
- [第六章 动态内存申请](#第六章-动态内存申请)
  - [一、动态分配内存的概](#一动态分配内存的概)
  - [二、静态分配、动态分配](#二静态分配动态分配)
  - [三、动态分配函数](#三动态分配函数)
    - [3.1 malloc](#31-malloc)
    - [3.2 free](#32-free)
    - [3.3 calloc](#33-calloc)
    - [3.4 realloc](#34-realloc)
  - [四、内存泄漏](#四内存泄漏)
- [第七章 字符串处理函数](#第七章-字符串处理函数)
  - [一、获取字符串长度函数](#一获取字符串长度函数)
  - [二、字符串拷贝函数](#二字符串拷贝函数)
  - [三、字符串追加函数](#三字符串追加函数)
  - [四、字符串比较函数](#四字符串比较函数)
  - [五、字符查找函数](#五字符查找函数)
  - [六、字符串匹配函数](#六字符串匹配函数)
  - [七、字符串转换数值](#七字符串转换数值)
  - [八、字符串切割函数](#八字符串切割函数)
  - [九、格式化字符串操作函数](#九格式化字符串操作函数)
    - [9.1 sprintf和sscanf的基本用法](#91-sprintf和sscanf的基本用法)
    - [9.2 sscanf高级用法](#92-sscanf高级用法)
  - [十、const](#十const)
- [第八章 结构体，共用体，枚举](#第八章-结构体共用体枚举)
  - [一、结构体类型的概念及定义](#一结构体类型的概念及定义)
    - [1.1 基本概述](#11-基本概述)
    - [1.2 结构体的概念](#12-结构体的概念)
    - [1.3 结构体类型的定义](#13-结构体类型的定义)
  - [二、结构体变量的定义初始化及使用](#二结构体变量的定义初始化及使用)
    - [2.1 结构体变量的定义和初始化](#21-结构体变量的定义和初始化)
    - [2.2 结构体变量的使用](#22-结构体变量的使用)
    - [2.3 相同类型的结构体变量可以相互赋值](#23-相同类型的结构体变量可以相互赋值)
  - [三、结构体数组](#三结构体数组)
  - [四、结构体指针](#四结构体指针)
  - [五、结构体内存分配问题](#五结构体内存分配问题)
  - [六、位段](#六位段)
  - [七、共用体](#七共用体)
  - [八、枚举](#八枚举)

## 第二章 数组

### 一、数组的概念

数组是若干个相同类型的变量在内存中有序存储的集合。

概念理解：

数组用于存储一组数据

数组里面存储的数据类型必须是相同的

数组在内存中会开辟一块连续的空间

`int a[10];`

//定义了一个整型的数组a，a是数组的名字，数组中有10个元素，每个元素的类型都是int类型，而且在内存中连续存储。

这十个元素分别是`a[0] a[1] …. a[9]`。

`a[0]~a[9]`在内存中连续的顺序存储。



### 二、数组的分类

#### 2.1 按元素的类型分类

1）字符数组

即若干个字符变量的集合，数组中的每个元素都是字符型的变量

`char s[10]; s[0],s[1]....s[9];`

2）短整型的数组

`short int a[10]; a[0] ,a[9]; a[0]=4;a[9]=8;`

3）整型的数组

`int a[10]; a[0] a[9]; a[0]=3;a[0]=6;`

4） 长整型的数组

`lont int a[5];`

5）浮点型的数组（单、双）

`float a[6]; a[4]=3.14f;`

`double a[8]; a[7]=3.115926;`

6）指针数组

`char *a[10];`

`int *a[10];`

7）结构体数组

`struct stu boy[10];`



#### 2.2 按维数分类

一维数组

`int a[30];`

类似于一排平房

二维数组

`int a[2][30];`

可以看成一栋楼房 有多层，每层有多个房间，也类似于数学中的矩阵

二维数组可以看成由多个一维数组构成的。

有行，有列，

多维数组

`int a[4][2][10];`

三维数组是由多个相同的二维数组构成的

`int a[5][4][2][10];`



### 三、数组的定义

#### 3.1 一维数组的定义

格式：

数据类型 数组名[数组元素个数];

例如：

`int a[10];`

 //定义了一个名为a的数组，数组中每一个元素都是int类型，一共有10个元素

//每一个元素都保存在一个变量中，每一个变量都是有数组名和数组下标组成的

//并且是从0开始的，分别是`a[0] a[1] a[2]... a[9]`

注意：数组元素的个数在定义的时候也可以不写，但是如果不写，必须初始化（定义的时候赋值）

```C
#include <stdio.h>

int main(int argc, char *argv[])
{
    //定义一个一维数组
    int a[10];
    //通过sizeof关键字可以获取数组的大小
    printf("sizeof(a) = %d %d\n", sizeof(a), 10 * sizeof(int));

    //如果定义数组的同时赋值（初始化），可以不指定数组元素的个数，系统会根据初始化元素的个数自动指定数组元素的个数
    int b[] = {10, 20, 30};
    printf("sizeof(b) = %d\n", sizeof(b));
  
    return 0;
}
```

执行结果

```C
sizeof(a) = 40 40
sizeof(b) = 12
```



#### 3.2 二维数组的定义

格式:

数据类型 数组名[行的个数][列的个数];

例如：

`int a[2][4];`

解释：

定义一个名为a的二维数组，每一个元素都是int类型

这个二维数组中包含两行四列的元素，一共有8个元素

二维数组也是连续开辟空间，访问元素是行和列都是从0开始，分别是`a[0][0] a[0][1] a[0][2] a[0][3] a[1][0] a[1][1] a[1][2] a[1][3]`

注意：二维数组的下标也是可以省略的，但是有条件，在初始化时行数可以省略，但是列数不能省略

```C
//定义一个二维数组
    int c[2][4];
    printf("sizeof(c) = %d %d\n", sizeof(c), 2 * 4 * sizeof(int));

    //二维数组的行数可以省略，但是列数不能省略，在初始化时可以这样操作
    //系统会根据列数自动指定行数，最终得到的函数所得到得元素个数移动是列的整数倍
    int d[][4] = {1, 2, 3, 4, 5};
    printf("sizeof(d) = %d\n", sizeof(d));
```

执行结果

```C
sizeof(c) = 32 32
sizeof(d) = 32
```



- 为什么sizeof(d) = 32？

    假设 `sizeof(int)` 在您的系统上是4字节，通常情况下，`int` 类型需要按4字节对齐。因此，编译器会在数组 `d` 的每一行之后添加填充以确保每一行都满足对齐要求。

    所以，虽然数组中的实际数据只占用20字节（5个 `int` 值 * 4字节），但由于填充字节，`sizeof(d)` 返回32字节。

    这种情况下的内存布局可能如下所示：

    ```C
    [1][2][3][4][5][0][0][0]
    ```

    这些额外的0值字节是为了满足内存对齐要求而添加的，因此导致 `sizeof(d)` 返回32字节。不同的编译器和系统可能会有不同的对齐规则，因此结果可能会有所不同。



### 四、定义并初始化

#### 4.1 一维数组的初始化

```C
#include<stdio.h>

int main(int argc, char *argv[])
{
    //以一维数组的初始化
    //如果不初始化，直接使用会是随机值
    //int a[4];

    //初始化方式1：全部初始化
    //int a[4] = {123, 78, 666, 476};
    //如果是全部 初始化，可以不指定数组元素的个数，系统会自动分配
    //int a[] = {10, 20, 30, 40};

    //初始化方式2：局部初始化
    //未初始化的位置的元素自动赋值为0
    int a[4] = {10, 20};

    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);

    return 0;
}
```



#### 4.2 二维数组的初始化

**按行初始化：**

a、全部初始化

`int a[2][2]={{1,2},{4,5}};`

`a[0][0] =1; a[0][1] = 2; a[1][0] = 4,a[1][1]=5;`

b、部分初始化

`int a[3][3]={{1,2},{1}};`

`a[0][0] = 1;a[0][2] =0;`

**逐个初始化：**

全部初始化：

`int a [2][3]={2,5,4,2,3,4};`

部分初始化：

`int a[2][3]={3,5,6,8};`

```C
#include <stdio.h>

int main(int argc, char *argv[])
{
    //二维数组的初始化
    //int a[2][3];

    //初始化方式1：按行初始化
    //全部初始化
    //int a[2][3] = {{10, 20, 30}, {666, 777, 888}};
    //局部初始化
    //没有赋值的位置的元素自动为0
    //int a[2][3] = {{10, 20}, {666}};

    //初始化方式2：逐个初始化
    //全部初始化
    //int a[2][3] = {1, 2, 3, 4, 5, 6};
    //局部初始化
    //没有赋值的位置的元素自动为0
    int a[2][3] = {1, 2, 3};

    printf("%d\n", a[0][0]);
    printf("%d\n", a[0][1]);
    printf("%d\n", a[0][2]);
    printf("%d\n", a[1][0]);
    printf("%d\n", a[1][1]);
    printf("%d\n", a[1][2]);

    return 0;
}
```



### 五、数组元素的引用方法

一维数组元素的引用方法

数组名[下标]；//下标代表数组元素在数组中的位置，注意从0开始

`int a[10];`

二维数组元素的引用方法

数组名[行下标][列下标];

`int a[3][4];`

```C
#include<stdio.h>

int main(int argc, char *argv[])
{
    //一维数组的引用以及一维数组的遍历
    int a[6] = {111, 222, 333, 444, 555, 666};

    a[3] = 10000;

    //一维数组的遍历
    int i;
    for(i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("**********************\n");

    //二维数组的引用以及二维数组的遍历
    int b[3][4] = {1, 2, 3, 4,
                  5, 6, 7, 8,
                  9, 10, 11, 12};

    b[2][0] = 666;

    //二维数组的遍历
    int m, n;
    //外层循环控制行数
    for(m = 0; m < 3; m++)
    {
        //内层循环控制列数
        for(n = 0; n < 4; n++)
        {
            printf("%-4d", b[m][n]);
        }
        printf("\n");
    }

    return 0;
}
```

执行结果

```C
a[0] = 111
a[1] = 222
a[2] = 333
a[3] = 10000
a[4] = 555
a[5] = 666
**********************
1   2   3   4
5   6   7   8
666 10  11  12
```



### 六、字符数组的定义和初始化问题

`char c1[] ={'c','p','r','o','g'};`

`char c2[] =  "c prog";`

`char a[][5] = {`

`{'B', 'A', 'S', 'I', 'C'},`

`{'d', 'B', 'A', 'S', 'E'}`

`};`

`char a[][6] = {"hello","world"};`

**字符数组的引用**

1.用字符串方式赋值比用字符逐个赋值要多占1个字节,用于存放字符串结束标志‘\0’;

2.上面的数组c2在内存中的实际存放情况为：

![02array_image.png](https://testingcf.jsdelivr.net/gh/EddyCliff/ChartBed/Embedded_high-level_C_programming/02array_image.png)

注：'\0'是由C编译系统自动加上的3.由于采用了'\0'标志，字符数组的输入输出将变得简单方便.

3.由于采用了'\0'标志，字符数组的输入输出将变得简单方便.

```C
#include <stdio.h>

int main(int argc, char *argv[])
{
    //定义一个字符数组，通过scanf函数输入字符串并输出结果
    //通过赋值""这样的方式可以清除字符数组中的垃圾字符，让每一个元素都是\0
    char ch[32] = "";

    //数组名就是当前数组的首地址，所以scanf的第二个参数直接传数组名即可
    scanf("%s", ch);

    printf("ch = %s\n", ch);

    return 0;
}
```

执行结果

```C
nihao
ch = nihao
```



**彩蛋**🎁

秋日薄暮，用菊花煮竹叶青，人与海棠俱醉。 

- 林清玄《温一壶月光下酒》

恭喜你🎉，完成了对第二章《数组》部分的学习，下一章我们将学习函数。

⏩第三章 《函数》

## 第三章 函数

### 一、函数的概念

函数是c语言的功能单位，实现一个功能可以封装一个函数来实现。

定义函数的时候一切以功能为目的，根据功能去定函数的参数和返回值。

函数就是讲特定功能的代码封装在一个函数内部，当要使用这些代码时，只需要通过函数名就可以使用，这样操作起来更加方便。



### 二、函数的分类

1、从定义角度分类（即函数是谁实现的）

1.库函数 (c库实现的)

2.自定义函数 （程序员自己实现的函数）

3.系统调用 (操作系统实现的函数)

2、从参数角度分类

1.有参函数

函数有形参，可以是一个，或者多个，参数的类型随便完全取决于函数的功能

```C
int fun(int a,float b,double c)
{

}

int max(int x,int y)

{

}
```

2.无参函数

函数没有参数,在形参列表的位置写个void或什么都不写

```C
int fun(void)

{

}

int fun()

{

}
```

3、从返回值角度分类

(1).带返回值的函数

在定义函数的时候，必须带着返回值类型，在函数体里，必须有return

如果没有返回值类型，默认返回整型。

例1：

```C
char fun()//定义了一个返回字符数据的函数
{
  char b='a';
  return b;
}
```

例2：

```C
fun()
{
  return 1;
}
```

如果把函数的返回值类型省略了，默认返回整型

注：在定义函数的时候，函数的返回值类型，到底是什么类型的，取决于函数的功能。

(2).没返回值的函数

在定义函数的时候，函数名字前面加void

```C
void fun(形参表)
{
  ;
  ;
  return ;
  ;
}
```

在函数里不需要return

如果想结束函数，返回到被调用的地方， return ;什么都不返回就可以了

```C
#include <stdio.h>
int max(int x,int y)
{
  int z;
  if(x>y)
  z=x;
  else
  z=y;
  return z;
}
void help(void)
{
  printf("*********************\n");
  printf("********帮助信息*****\n");
  printf("*********************\n");
}
int main(int argc, char *argv[])
{
  int num;
  help();
  num = max(10,10+5);
  printf("num=%d\n",num);
  return 0;
}
```

三、函数的定义

1、函数的定义方法

返回值类型 函数名字(形参列表)

{

//函数体，函数的功能在函数体里实现

}

注意：

函数名字是标识符，所以需要满足标识符的命名规则

形参：可以有，也可以没有，也可以有多个，但是即使没有，函数名字后面也必须加括号

函数体上下位置必须有大括号

如果要返回函数执行的结果，也就是返回值，则return后面跟的变量或者值，必须与函数名左边的返回值类型一致

形参必须带类型，而且以逗号分隔

函数的定义不能嵌套，即不能在一个函数体内定义另外一个函数，所有的函数的定义是平行的。

在一个程序中，相同的函数名只能出现一次。

```C
//定义一个没有参数也没有返回值的函数
void myfun1()
{
  printf("hello world\n");
  printf("nihao beijing\n");
  printf("welcome to 1000phone\n");

  return ;
}

//定义一个有参数的函数
void myfun2(int a, int b)
{
  int sum;
  sum = a + b;

  printf("%d + %d = %d\n", a, b, sum);
}

//定义一个有返回值的函数
int myfun3(int a, int b)
{
  int sum;
  sum = a + b;

  return sum;
}
```



### 四、函数的声明

1、概念

对已经定义的函数，进行说明

函数的声明可以声明多次。

2、为什么要声明

有些情况下，如果不对函数进行声明，编译器在编译的时候，可能不认识这个函数，因为编译器在编译c程序的时候，从上往下编译的。

3、声明的方法

什么时候需要声明

1）主调函数和被调函数在同一个.c文件中的时候

1] 被调函数在上，主调函数在下

```C
void fun(void)
{
  printf("hello world\n");
}
int main()
{
  fun();
}
```

这种情况下**不需要声明**

2] 被调函数在下，主调函数在上

```C
int main()
{
  fun();
}
void fun(void)
{
  printf("hello world\n");
}
```

编译器从上往下编译，在main函数（主调函数），不认识fun，需要声明

怎么声明 呢？

1] 直接声明法（常用）

将被调用的函数的第一行拷贝过去，后面加分号

```C
#include <stdio.h>
//函数的声明：一般当子函数在主函数的下方时，需要在主函数的上方进行声明
void myfun1();
void myfun2(int a, int b);
int myfun3(int a, int b);
int main(int argc, char *argv[])
{
  myfun1();
  return 0;
}

void myfun1()
{
  printf("hello world\n");
  printf("nihao beijing\n");
  printf("welcome to 1000phone\n");
  return ;
}

void myfun2(int a, int b)
{
  int sum;
  sum = a + b;

  printf("%d + %d = %d\n", a, b, sum);
}

int myfun3(int a, int b)
{
  int sum;
  sum = a + b;

  return sum;
}
```

2] 间接声明法

将函数的声明放在头文件中，.c程序包含头文件即可

```C
a.c
#include”a.h”
int main()
{
  fun();
}
void fun(void)
{
  printf("hello world\n");
}

a.h
extern void fun(void);
```



2）主调函数和被调函数不在同一个.c文件中的时候

一定要声明

声明的方法：

直接声明法

将被调用的函数的第一行拷贝过去，后面加分号，前面加extern

间接声明法（常用）

将函数的声明放在头文件中，.c程序包含头文件即可

```C
myfun.c
#include "myfun.h" //此时包含的头文件要使用双引号，在当前目录下去找对应头文件

void myfun1()
{
  printf("hello world\n");
  printf("nihao beijing\n");
  printf("welcome to 1000phone\n");

  return ;
}

myfun.h
#ifndef MYFUN_H
#define MYFUN_H

//函数的声明
void myfun1();

#endif // MYFUN_H

main.c
#include <stdio.h>
#include "myfun.h"

int main(int argc, char *argv[])
{
  myfun1();

  return 0;
}
```



### 五、函数的调用

函数的调用方法

变量= 函数名(实参列表);   //带返回值的

函数名(实参列表);   //不带返回值的

```C
#include <stdio.h>

void myfun1();
void myfun2(int a, int b);
int myfun3(int a, int b);
int main(int argc, char *argv[])
{
  //函数的调用
  //没有参数也没有返回值
  //直接写函数名，并且要在后面加括号
  myfun1();

  printf("**********************\n");

  //有参数，没有返回值
  //需要在函数名右边括号中传入参数，参数可以是常量表达式，也可以是变量表达式
  myfun2(100, 90);

  int x = 10, y = 20;
//x、y：实参，实际参数，本质就是在函数调用的时候将实参的值传递给形参
  myfun2(x, y);

  printf("**********************\n");

  //有参数也有返回值
  //可以使用一个变量接收函数执行结果（返回值），或者直接输出也可以
  int n;
  n = myfun3(100, 90);
  printf("n = %d\n", n);

  printf("sum = %d\n", myfun3(90, 66));
  return 0;
}

void myfun1()
{
  printf("hello world\n");
  printf("nihao beijing\n");
  printf("welcome to 1000phone\n");

  return ;
}

//a、b：形参，形式参数，主要用于保存实参传递的值，本质跟实参没有任何关系，只是值传递
void myfun2(int a, int b)
{
  int sum;
  sum = a + b;

  printf("%d + %d = %d\n", a, b, sum);
}

int myfun3(int a, int b)
{
  int sum;
  sum = a + b;

  return sum;
}
```

执行结果

```C
hello world
nihao beijing
welcome to 1000phone
**********************
100 + 90 = 190
10 + 20 = 30
**********************
n = 190
sum = 156
```



### 六、函数总结

定义函数的时候，关于函数的参数和返回值是什么情况，完全取决于函数的功能。

当编写函数的时候，一开始不要想着函数如何传参和函数的返回值应该是什么

而是当在编写代码的途中，要使用某些值，但是当前函数中不存在，此时就需要进行传参，这时候考虑怎么传参就是合适的时机

当函数编写完毕后，考虑是否要将某些结果返回给其他函数去使用，此时需要考虑返回值



使用函数的好处？

1、定义一次，可以多次调用，减少代码的冗余度。

2、使咱们代码，模块化更好，方便调试程序，而且阅读方便



### 七、变量的存储类别

#### 7.1 内存的分区

1、内存：物理内存、虚拟内存

物理内存：实实在在存在的存储设备

虚拟内存：操作系统虚拟出来的内存

操作系统会在物理内存和虚拟内存之间做映射。

在32位系统下，每个进程的寻址范围是4G,0x00 00 00 00 ~0xff ff ff ff

在写应用程序的，咱们看到的都是虚拟地址。



在32位操作系统中，虚拟内存被分为两个部分，3G的用户空间和1G内核空间，其中用户空间是当前进程所私有的，内核空间，是一个系统中所有的进程所公有的。



2、在运行程序的时候，操作系统会将 虚拟内存进行分区

1).堆

在动态申请内存的时候，在堆里开辟内存。

2).栈

主要存放局部变量。

3).静态全局区

1：未初始化的静态全局区

静态变量（定义变量的时候，前面加static修饰），或全局变量 ，没有初始化的，存在此区

2：初始化的静态全局区

全局变量、静态变量，赋过初值的，存放在此区

4).代码区

存放咱们的程序代码。

5).文字常量区

存放常量的。



#### 7.2 普通的全局变量

概念：

在函数外部定义的变量

```C
int num = 100; //num就是一个全局变量
int main()
{
  return 0;
}
```

作用范围：

全局变量的作用范围，是程序的所有地方。

只不过用之前需要声明。声明方法 extern int num;

注意声明的时候，不要赋值。

生命周期：

程序运行的整个过程，一直存在，直到程序结束。

注意：定义普通的全局变量的时候，如果不赋初值，它的值默认为0

```C
#include <stdio.h>

//定义一个普通全局变量
//只要是在main函数外（也在子函数外）的变量，就是全局变量
//如果全局变量没有进行初始化，则系统自动将其初始化为0
int num;

//全局变量可以在程序的任意一个位置进行对其的操作
void myfun()
{
  num = 888;
}

int main(int argc, char *argv[])
{
  printf("num = %d\n", num);
  myfun();
  printf("num = %d\n", num);  
  return 0;
}
```

执行结果

```C
num = 0
num = 888
```



#### 7.3 静态全局变量

概念：

定义全局变量的时候，前面用static 修饰。

```C
static int num=100;  //num就是一个静态全局变量
int main()
{
  return 0;
}
```

作用范围：

static 限定了静态全局变量的作用范围

只能在它定义的.c（源文件）中有效

生命周期：

在程序的整个运行过程中，一直存在。

注意：定义静态全局变量的时候，如果不赋初值，它的值默认为0

```C
#include <stdio.h>

//定义一个静态全局变量
//静态全局变量只能在其定义的.c文件中任意位置使用，不能跨文件使用
static int num;

void myfun()
{
  num++;
}

int main(int argc, char *argv[])
{
  printf("num = %d\n", num);
  myfun();
  printf("num = %d\n", num);
  return 0;
}
```

执行结果

```C
num = 0
num = 1
```



#### 7.4 普通的局部变量

概念：

在函数内部定义的，或者复合语句中定义的变量

```C
int main()
{
  int num;  //局部变量
  {
  int a;  //局部变量
  }
}
```

作用范围：

在函数中定义的变量，在函数中有效。

在复合语句中定义的，在复合语句中有效。

生命周期：

在函数调用之前，局部变量不占用空间，调用函数的时候，才为局部变量开辟空间，函数结束了，局部变量就释放了。

在复合语句中定义的亦如此

```C
#include <stdio.h>

//定义一个局部变量
//在函数内部定义的，不加任何修饰的变量都是局部变量
void myfun()
{
  int num = 100;
  num++;
  printf("num = %d\n", num);

  return ;
}

int main(int argc, char *argv[])
{
  //局部变量只能在定义的函数内部使用，声明周期相对较短，函数结束，局部变量就会释放
  //printf("num = %d\n", num);
  myfun();
  myfun();
  myfun();

  return 0;
}
```

执行结果

```C
num = 101
num = 101
num = 101
```



#### 7.5 静态的局部变量

概念：

定义局部变量的时候，前面加static 修饰

作用范围：

在它定义的函数或复合语句中有效。

生命周期：

第一次调用函数的时候，开辟空间赋值，函数结束后，不释放，以后再调用函数的时候，就不再为其开辟空间，也不赋初值，用的是以前的那个变量。

```C
#include <stdio.h>
//定义一个静态局部变量
//在函数内部定义的使用static修饰的变量就是静态局部变量

void myfun()
{
  //如果普通局部变量不进行初始化，则默认是随机值
  //如果静态局部变量不进行初始化，则默认是0
  int a; //普通局部变量
  static int num; //静态局部变量

  printf("a = %d\n", a);
  printf("num = %d\n", num);
}

void myfun1()
{
  //静态局部变量不会随着当前函数执行结束而释放空间，下次使用的函数之前的空间
  //静态局部变量只会初始化一次
  static int num1 = 100;
  num1++;

  printf("num1 = %d\n", num1);
}

int main(int argc, char *argv[])
{
  myfun();

  myfun1();
  myfun1();
  myfun1();
  return 0;
 }
```

执行结果

```C
a = 420043
num = 0
num1 = 101
num1 = 102
num1 = 103
```



注意：

1：定义普通局部变量，如果不赋初值，它的值是随机的。

定义静态局部变量，如果不赋初值，它的值是0

2：普通全局变量，和静态全局变量如果不赋初值，它的值为0



#### 7.6 外部函数

咱们定义的普通函数，都是外部函数。

即函数可以在程序的任何一个文件中调用。

在分文件编程中，只需要将函数的实现过程写在指定的.c文件中，然后将其声明写在指定的.h文件中，其他文件只要包含了头文件，就可以使用外部函数。



#### 7.7 内部函数

内部函数也称之为静态函数，就是用static修饰的函数。

在定义函数的时候，返回值类型前面加static 修饰。这样的函数被称为内部函数。

static 限定了函数的作用范围，在定义的.c中有效。



内部函数和外部函数的区别：

外部函数，在所有地方都可以调用，

内部函数，只能在所定义的.c中的函数调用。



扩展：

在同一作用范围内，不允许变量重名。

作用范围不同的可以重名。

局部范围内，重名的全局变量不起作用。（就近原则）

```C
int num = 100; //全局变量
int main()
{
//如果出现可以重名的情况，使用的时候满足向上就近原则
  int num = 999; //局部变量

  return 0;
}
```



**彩蛋**🎁

秋是第二个春，此时，每一片叶子都是一朵鲜花。 

- 阿尔贝 · 加缪《秋是第二个春》

恭喜你🎉，完成了对第三章《函数》部分的学习，下一章我们将学习预处理。

⏩第四章 《预处理》

## 第四章 预处理

### 一、C语言编译过程

C语言的编译过程：

预处理、编译、汇编、链接

`gcc -E hello.c -o hello.i`  1、预处理

`gcc -S hello.i –o hello.s`  2、编译

`gcc -c hello.s -o hello.o` 3、汇编

`gcc hello.o -o hello_elf`  4、链接

1：预编译

将.c 中的头文件展开、宏展开

生成的文件是.i文件

2：编译

将预处理之后的.i 文件生成 .s 汇编文件

3、汇编

将.s汇编文件生成.o 目标文件

4、链接

将.o 文件链接成目标文件



### 二、include

`#include<>`  //用尖括号包含头文件，在系统指定的路径下找头文件

`#include ""`   //用双引号包含头文件，先在当前目录下找头文件，找不到，再到系统指定的路径下找。

注意：include 经常用来包含头文件，可以包含 .c 文件，但是大家不要包含.c。

因为include包含的文件会在预编译被展开，如果一个.c 被包含多次，展开多次，会导致函数重复定义。

所以不要包含.c 文件

注意：预处理只是对include 等预处理操作进行处理并不会进行语法检查。

这个阶段有语法错误也不会报错，第二个阶段即编译阶段才进行语法检查。



### 三、define

定义宏用define 去定义。

宏是在预编译的时候进行替换。

#### 1、不带参宏

  `#define PI 3.14`

  在预编译的时候如果代码中出现了PI 就用 3.14去替换。

  宏的好处：只要修改宏定义，其他地方在预编译的时候就会重新替换。

注意：宏定义后边不要加分号。

```C
#include <stdio.h>

//宏定义的好处是只要改变了定义是的常量表达式，则代码中只要使用这个宏定义的位置都会改变
#define PI 3.1415926

int main(int argc, char *argv[])
{
  printf("PI = %lf\n", PI);

  double d = PI;
  printf("d = %lf\n", d);

  return 0;
}
```

执行结果

```C
PI = 3.141593
d = 3.141593
```



宏定义的作用范围，从定义的地方到本文件末尾。

如果想在中间终止宏的定义范围

`#undef PI`   //终止PI的作用



#### 2、带参宏

`#define S(a,b) a*b`

注意带参宏的形参 a和b没有类型名，

S(2,4) 将来在预处理的时候替换成 实参替代字符串的形参，其他字符保留，2 * 4

```C
#include <stdio.h>

//带参宏
//带参宏类似于一个简单的函数，将函数的参数进行设置，就可以传递给对应的表达式
//#define S(a, b) a*b
#define S(a, b) ((a)*(b))

int main(int argc, char *argv[])
{
  printf("%d\n", S(2, 4));
  //注意：宏定义只是简单的替换，不会自动加括号
  //带参宏1：2 + 8 * 4 = 34
  //带参宏2：((2 + 8) * (4)) = 40
  printf("%d\n", S(2 + 8, 4));

  return 0;
}
```



#### 3、带参宏和带参函数的区别

    - 带参宏被调用多少次就会展开多少次，执行代码的时候没有函数调用的过程，不需要压栈弹栈。所以带参宏，是浪费了空间，因为被展开多次，节省时间。

    - 带参函数，代码只有一份，存在代码段，调用的时候去代码段取指令，调用的时候要压栈弹栈。有个调用的过程。所以说，带参函数是浪费了时间，节省了空间。

    - 带参函数的形参是有类型的，带参宏的形参没有类型名。

    - 如果功能实现的代码相对简单，并且不需要开辟太多的空间，可以选择使用带参宏，但是大多数情况都会使用函数。



### 四、选择性编译

1、

```Markdown
#ifdef AAA

  代码段一

#else

  代码段二

#endif
```

如果在当前.c ifdef 上边定义过AAA ，就编译代码段一，否则编译代码段二。



注意和if else语句的区别，if else 语句都会被编译，通过条件选择性执行代码。

而 选择性编译，只有一块代码被编译。

```C
#define AAA

int main(int argc, char *argv[])
{
  #ifdef AAA
  printf("hello kitty!!\n");
  #else
  printf("hello 千锋edu\n");
  #endif
  return 0;
}
```



2、

```Markdown
#ifndef AAA

  代码段一

#else

  代码段二

#endif
```

和第一种互补。

这种方法，经常用在防止头文件重复包含。

常用于多文件编程中.h的第一行就是#ifndef，最后一行就是#endif



3、

```Markdown
#if 表达式
  程序段一
#else
  程序段二
#endif
```

如果表达式为真，编译第一段代码，否则编译第二段代码。

这种形式一般用于注释多行代码。

 

```Markdown
#if 0

...

#endif
```

选择性编译都是在预编译阶段干的事情。



**彩蛋**🎁

秋天的阳光醇厚，在建筑物顶端闪闪发光。河流，树林，软绵绵的草地，云絮从上面缓缓飘移。

- 村上春树《有餐车多好》

恭喜你🎉，完成了对第四章《预处理》部分的学习，下一章我们将学习指针。

⏩第五章 《指针》

## 第五章 指针

### 一、关于内存那点事

**存储器：存储数据器件**

**外存**

外存又叫外部存储器，长期存放数据，掉电不丢失数据

常见的外存设备：硬盘、flash、rom、u盘、光盘、磁带

**内存**

内存又叫内部存储器，暂时存放数据，掉电数据丢失

常见的内存设备：ram、DDR



物理内存：实实在在存在的存储设备

虚拟内存：操作系统虚拟出来的内存，当一个进程被创建的时候，或者程序运行的时候都会

分配虚拟内存，虚拟内存和物理内存之间存在映射关系。



操作系统会在物理内存和虚拟内存之间做映射。

在32位系统下，每个进程（运行着的程序）的寻址范围是4G,0x00 00 00 00 ~0xff ff ff ff

在写应用程序的，咱们看到的都是虚拟地址。



在运行程序的时候，操作系统会将 虚拟内存进行分区。

1.堆

在动态申请内存的时候，在堆里开辟内存。

2.栈

主要存放局部变量（在函数内部，或复合语句内部定义的变量）。

3.静态全局区

1）：未初始化的静态全局区

静态变量（定义的时候，前面加static修饰），或全局变量 ，没有初始化的，存在此区

2）：初始化的静态全局区

全局变量、静态变量，赋过初值的，存放在此区

4.代码区

存放咱们的程序代码

5.文字常量区

存放常量的。

内存以字节为单位来存储数据的，咱们可以将程序中的虚拟寻址空间，看成一个很大的一维的字符数组



本章所接触的内容，涉及到的内存都是虚拟内存，更准确来说是虚拟内存的用户空间



### 二、指针的相关概念

操作系统给每个存储单元分配了一个编号，从0x00 00 00 00 ~0xff ff ff ff

这个编号咱们称之为地址。

指针就是地址。

![05pointer_image_1.png](https://testingcf.jsdelivr.net/gh/EddyCliff/ChartBed/Embedded_high-level_C_programming/05pointer_image%20_1.png)

指针变量：是个变量，是个指针变量，即这个变量用来存放一个地址编号

在32位平台下，地址总线是32位的，所以地址是32位编号，所以指针变量是32位的即4个字节。



注意：

1：无论什么类型的地址，都是存储单元的编号，在32位平台下都是4个字节，即任何类型的指针变量都是4个字节大小

2：对应类型的指针变量，只能存放对应类型的变量的地址

举例：整型的指针变量，只能存放整型变量的地址



扩展：

字符变量 char ch; ch占1个字节，它有一个地址编号，这个地址编号就是ch的地址

整型变量 int a; a占4个字节，它占有4个字节的存储单元，有4个地址编号。

![05pointer_image_2.png](https://testingcf.jsdelivr.net/gh/EddyCliff/ChartBed/Embedded_high-level_C_programming/05pointer_image%20_2.png)

`Int a=0x00 00 23 4f`



### 三、指针的定义方法

1.简单的指针

数据类型 * 指针变量名;

`int * p;`  //定义了一个指针变量p

在 定义指针变量的时候 * 是用来修饰变量的，说明变量p是个指针变量。

变量名是 p

2.关于指针的运算符

& 取地址 、 *取值

&：获取一个变量的地址 

*：在定义一个指针变量时，起到标识作用，标识定义的是一个指针变量

除此之外其他地方都表示获取一个指针变量保存的地址里面的内容

![05pointer__image_3.png](https://testingcf.jsdelivr.net/gh/EddyCliff/ChartBed/Embedded_high-level_C_programming/05pointer_image%20_3.png)

```C
#include <stdio.h>

int main(int argc, char *argv[])
{
  //定义一个普通变量
  int a = 100;
  //定义一个指针变量
  int *p;

  //给指针变量赋值
  //将a的地址保存在p中
  p = &a;

  printf("a = %d %d\n", a, *p);
  printf("&a = %p %p\n", &a, p);

  return 0;
}
```

执行结果

```C
a = 100 100
&a = 0029FEA8 0029FEA8
```



扩展：如果在一行中定义多个指针变量，每个指针变量前面都需要加*来修饰

`int *p,*q;`  //定义了两个整型的指针变量p和q

`int * p,q;`  //定义了一个整型指针变量p，和整型的变量q



3、指针大小

在32位系统下，所有类型的指针都是4个字节。

因为不管地址内的空间多大，但是地址编号的长度是一样的，所以在32位操作系统中，地址都是四个字节。

```C
#include <stdio.h>

int main(int argc, char *argv[])
{
  char *a;
  short *b;
  int *c;
  long *d;
  float *e;
  double *f;

  printf("sizeof(a) = %d\n", sizeof(a));
  printf("sizeof(b) = %d\n", sizeof(b));
  printf("sizeof(c) = %d\n", sizeof(c));
  printf("sizeof(d) = %d\n", sizeof(d));
  printf("sizeof(e) = %d\n", sizeof(e));
  printf("sizeof(f) = %d\n", sizeof(f));

  return 0;
}
```

执行结果

```C
sizeof(a) = 4
sizeof(b) = 4
sizeof(c) = 4
sizeof(d) = 4
sizeof(e) = 4
sizeof(f) = 4
```



### 四、指针的分类

按指针指向的数据的类型来分。

**1:字符指针**

字符型数据的地址

`char *p;`  //定义了一个字符指针变量，只能存放字符型数据的地址编号

`char ch;`

`p= &ch;`

**2：短整型指针**

`short int *p;`  //定义了一个短整型的指针变量p，只能存放短整型变量的地址

`short int a;`

`p =&a;`

**3：整型指针**

`int *p;` //定义了一个整型的指针变量p，只能存放整型变量的地址

`int a;`

`p =&a;`

注：多字节变量，占多个存储单元，每个存储单元都有地址编号，

c语言规定，存储单元编号最小的那个编号，是多字节变量的地址编号。

**4：长整型指针**

`long int *p;`  //定义了一个长整型的指针变量p，只能存放长整型变量的地址

`long int a;`

`p =&a;`

**5：float 型的指针**

`float *p;`  //定义了一个float型的指针变量p，只能存放float型变量的地址

`float a;`

`p =&a;`

**6：double型的指针**

`double *p;`  //定义了一个double型的指针变量p，只能存放double型变量的地址

`double a;`

`p =&a;`

7：函数指针

8、结构体指针

9、指针的指针

10、数组指针

总结:无论什么类型的指针变量，在32位系统下，都是4个字节，只能存放对应类型的变量的地址编号。



### 五、指针和变量的关系

指针可以存放变量的地址编号

在程序中，引用变量的方法

1:直接通过变量的名称

`int a;`

`a = 100;`

2:可以通过指针变量来引用变量

`int * p;`  //在定义的时候，*不是取值的意思，而是修饰的意思，修饰p是个指针变量

`p = &a;`  //取a的地址给p赋值，p保存了a的地址，也可以说p指向了a

`*p = 100;`  //在调用的时候*是取值的意思，*指针变量 等价于指针指向的变量

注：指针变量在定义的时候可以初始化

`int a;`

`int * p = &a;` //用a的地址，给p赋值，因为p是指针变量

指针就是用来存放变量的地址的。

*+指针变量 就相当于指针指向的变量



指针变量只能保存开辟好空间的地址，不能随意保存地址

```C
#include <stdio.h>

int main(int argc, char *argv[])
{
  int *p1,*p2,temp,a,b;
  p1=&a;
  p2=&b;

  printf("请输入:a b的值:\n");
  scanf("%d %d", p1, p2);  //给p1和p2指向的变量赋值

  temp = *p1;  //用p1指向的变量（a）给temp赋值
  *p1 = *p2;   //用p2指向的变量（b）给p1指向的变量（a）赋值
  *p2 = temp;  //temp给p2指向的变量（b）赋值

  printf("a=%d b=%d\n",a,b);
  printf("*p1=%d *p2=%d\n",*p1,*p2);

  return 0;
}
```

执行结果

```C
请输入:a b的值:
70 90
a=90 b=70
*p1=90 *p2=70
```



扩展：

对应类型的指针，只能保存对应类型数据的地址，

如果想让不同类型的指针相互赋值的时候，需要强制类型转换。

```C
#include <stdio.h>

int main(int argc, char *argv[])
{
  int a=0x1234,b=0x5678;
  char *p1,*p2;
  printf("%#x %#x\n",a,b);
  p1=(char *)&a;
  p2=(char *)&b;
  printf("%#x %#x\n",*p1,*p2);
  p1++;
  p2++;
  printf("%#x %#x\n",*p1,*p2);

  return 0;
}
```



**彩蛋**🎁

如果你来访我，我不在，请和我门外的花坐一会儿，它们很温暖，我注视它们很多日子了。

- 汪曾祺《人间草木》

恭喜你🎉，完成了对第五章《指针》部分的学习，下一章我们将学习动态内存申请。

⏩第六章 《动态内存申请》


## 第六章 动态内存申请

### 一、动态分配内存的概

在数组一章中，介绍过数组的长度是预先定义好的，在整个程序中固定不变，但是在实际的编程中，往往会发生这种情况，即所需的内存空间取决于实际输入的数据，而无法预先确定 。

为了解决上述问题，Ｃ语言提供了一些内存管理函数，这些内存管理函数可以按需要动态的分配内存空间，也可把不再使用的空间回收再次利用。



动态分配内存就是在堆区开辟空间。



### 二、静态分配、动态分配

**静态分配**

1、 在程序编译或运行过程中，按事先规定大小分配内存空间的分配方式。int a [10]

2、 必须事先知道所需空间的大小。

3、 分配在栈区或全局变量区，一般以数组的形式。

4、 按计划分配。

**动态分配**

1、在程序运行过程中，根据需要大小自由分配所需空间。

2、按需分配。

3、分配在堆区，一般使用特定的函数进行分配。



### 三、动态分配函数

#### 3.1 malloc

```C
#include <stdlib.h>
void *malloc(unsigned int size);
功能：在堆区开辟指定长度的空间，并且空间是连续的
参数：
  size：要开辟的空间的大小
返回值：
  成功：开辟好的空间的首地址
  失败：NULL
```

注意

1、在调用malloc之后，一定要判断一下，是否申请内存成功。

2、如果多次malloc申请的内存，第1次和第2次申请的内存不一定是连续的

3、使用malloc开辟空间需要保存开辟好的空间的首地址，但是由于不确定空间用于做什么，所以本身返回值类型为void *，所以在调用函数时根据接收者的类型对其进行强制类型转换

```C
#include <stdio.h>
#include <stdlib.h>

char *fun()
{
  //char ch[100] = "hello world";

  //静态全局区的空间只要开辟好，除非程序结束，否则不会释放，所以
  //如果是临时使用，不建议使用静态全局区的空间
  //static char ch[100] = "hello world";

  //堆区开辟空间，手动申请手动释放，更加灵活
  //使用malloc函数的时候一般要进行强转
  char *str = (char *)malloc(100 * sizeof(char));
  str[0] = 'h';
  str[1] = 'e';
  str[2] = 'l';
  str[3] = 'l';
  str[4] = 'o';
  str[5] = '\0';

  return str;
}

int main(int argc, char *argv[])
{
  char *p;
  p = fun();
  printf("p = %s\n", p);

  return 0;
}
```

执行结果

```C
p = hello
```



#### 3.2 free

```C
#include <stdlib.h>
void free(void *ptr)
功能：释放堆区的空间
参数：
  ptr：开辟后使用完毕的堆区的空间的首地址
返回值：
  无
```

注意：

- free函数只能释放堆区的空间，其他区域的空间无法使用free

- free释放空间必须释放malloc或者calloc或者realloc的返回值对应的空间，不能说只释放一部分

- free(p); 注意当free后，因为没有给p赋值，所以p还是指向原先动态申请的内存。但是内存已经不能再用了，p变成野指针了，所以一般为了放置野指针，会free完毕之后对p赋为NULL。

- 一块动态申请的内存只能free一次，不能多次free

![06Dynamic_memory_request_image_4.png](https://testingcf.jsdelivr.net/gh/EddyCliff/ChartBed/Embedded_high-level_C_programming/06Dynamic_memory_request_image_4.png)



#### 3.3 calloc

```C
#include <stdlib.h>
void * calloc(size_t nmemb,size_t size);
功能：在堆区申请指定大小的空间
参数：
  nmemb：要申请的空间的块数
  size：每块的字节数
返回值：
  成功：申请空间的首地址
  失败：NULL
```

注意：

malloc和calloc函数都是用来申请内存的。

区别：

1) 函数的名字不一样

2) 参数的个数不一样

3) malloc申请的内存，内存中存放的内容是随机的，不确定的，而calloc函数申请的内存中的内容为0

例如：

`char *p=(char *)calloc(3,100);`  在堆中申请了3块，每块大小为100个字节，即300个字节连续的区域



#### 3.4 realloc

```C
#include <stdlib.h>
void* realloc(void *s,unsigned int newsize);
功能：在原本申请好的堆区空间的基础上重新申请内存，新的空间大小为函数的第二个参数
  如果原本申请好的空间的后面不足以增加指定的大小，系统会重新找一个足够大的位置开辟指定的空间，然后将原本空间中的数据拷贝过来，然后释放原本的空间
  如果newsize比原先的内存小，则会释放原先内存的后面的存储空间，只留前面的newsize个字节
参数：
  s：原本开辟好的空间的首地址
  newsize：重新开辟的空间的大小
返回值：
  新的空间的首地址
```

增加空间：

```C
char *p;
p=(char *)malloc(100)
//想在100个字节后面追加50个字节
p=(char *)realloc(p,150);//p指向的内存的新的大小为150个字节
```

![06Dynamic_memory_request_image_5.png](https://testingcf.jsdelivr.net/gh/EddyCliff/ChartBed/Embedded_high-level_C_programming/06Dynamic_memory_request_image%205.png)

减少空间:

```C
  char *p;
  p=(char *)malloc(100)
  //想重新申请内存,新的大小为50个字节
  p=(char *)realloc(p,50);//p指向的内存的新的大小为50个字节,100个字节的后50个字节的存储空间就被释放了
```

注意:malloc calloc relloc 动态申请的内存，只有在free或程序结束的时候才释放。



### 四、内存泄漏

内存泄露的概念：

申请的内存，首地址丢了，找不了，再也没法使用了，也没法释放了，这块内存就被泄露了。

内存泄漏案例1：

```C
int main()
{
  char *p;
  p=(char *)malloc(100);
  //接下来，可以用p指向的内存了

  p="hello world";//p指向别的地方了，保存字符串常量的首地址

  //从此以后，再也找不到你申请的100个字节了。则动态申请的100个字节就被泄露了

  return 0;
}
```

内存泄漏案例2：

```C
void fun()
{
  char *p;
  p=(char *)malloc(100);
  //接下来，可以用p指向的内存了
  ...
}

int main()
{
  //每调用一次fun泄露100个字节
  fun();
  fun();
  return 0;
}
```

解决方式1：

```C
void fun()
{
  char *p;
  p=(char *)malloc(100);
  //接下来，可以用p指向的内存了
  ...
  free(p);
}

int main()
{
  fun();
  fun();
  return 0;
}
```

解决方式2：

```C
char * fun()
{
  char *p;
  p=(char *)malloc(100);
  //接下来，可以用p指向的内存了
  ...
  return p;
}

int main()
{
  char *q;
  q=fun();
  //可以通过q使用 ，动态申请的100个字节的内存了
  //记得释放
  free(q);
  //防止野指针
  q = NULL;

  return 0;
}
```

总结：申请的内存，一定不要把首地址给丢了，在不用的时候一定要释放内存。



**彩蛋**🎁

我默默地想，慢慢地写。看见冬阳下的骆驼队走过来，听见缓慢悦耳的铃声，童年重临于我的心头。 

- 林海音《城南旧事》

恭喜你🎉，完成了对第六章《动态内存申请》部分的学习，下一章我们将学习字符串处理函数。

⏩第七章 《字符串处理函数》


## 第七章 字符串处理函数

### 一、获取字符串长度函数

```C
#include <string.h>
size_t strlen(const char *s);
功能：计算一个字符串的长度
参数：
  s：指定的字符串
返回值：
  当前字符串的长度
注意：strlen获取的字符串长度遇到第一个\0结束且\0不算做字符串长度之中
```

```C
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  //使用strlen函数获取字符串的长度
  //strlen获取的字符串的长度遇到第一个\0结束
  char s1[100] = "hel\0lo";

  printf("s1_len = %d\n", strlen(s1));
  printf("s1_size = %d\n", sizeof(s1));

  char *s2 = "hello";

  printf("s2_len = %d\n", strlen(s2));
  printf("s2_size = %d\n", sizeof(s2));

  return 0;
}
```

执行结果

```C
s1_len = 3
s1_size = 100
s2_len = 5
s2_size = 4
```



### 二、字符串拷贝函数

```C
#include <string.h>
char *strcpy(char *dest, const char *src);
功能：将src复制给dest
参数：
  dest：目的字符串
  src：源字符串
返回值：
  保存dest字符串的首地址
注意：
  使用strcpy函数复制字符串时必须保证dest足够大，否则会内存溢出
  strcpy是将src字符串中第一个\0之前包括\0复制给dest

char *strncpy(char *dest, const char *src, size_t n);
函数的说明：
  将src指向的字符串前n个字节，拷贝到dest指向的内存中
返回值:
  目的内存的首地址
注意：
  1、strncpy不拷贝 ‘\0’
  2、如果n大于src指向的字符串中的字符个数，则在dest后面填充n‐strlen(src)个’\0’
```

```C
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  //使用strcpy函数拷贝字符串
  char s1[32] = "hello world";
  //使用strcpy函数时，必须保证第一个参数的内存足够大
  //char s1[5] = "abcd";
  char s2[32] = "abcdefg";

  strcpy(s1, s2);

  printf("s1 = %s\n", s1);

  int i;
  for(i = 0; i < 32; i++)
  {
    printf("[%c] ‐ %d\n", s1[i], s1[i]);
  }

  return 0;
}
```

执行结果

```C
s1 = abcdefg
[a] - 97
[b] - 98
[c] - 99
[d] - 100
[e] - 101
[f] - 102
[g] - 103
[] - 0
[r] - 114
[l] - 108
[d] - 100
[] - 0
[] - 0
```



### 三、字符串追加函数

```C
#include <string.h>
char *strcat(char *dest, const char *src);
功能：将src追加到dest的后面
参数：
  dest：目的字符串
  src：源字符串
返回值：
  保存dest字符串的首地址

char *strncat(char *dest, const char *src, size_t n);
追加src指向的字符串的前n个字符，到dest指向的字符串的后面。
注意如果n 大于src的字符个数，则只将src字符串追加到dest指向的字符串的后面
追加的时候会追加’\0’
```

```C
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  //使用strcat函数追加字符串
  char s1[32] = "hello world";
  char s2[32] = "abcdef";

  //strcat是从s1的\0的位置开始追加，直到s2的第一个\0复制完毕后结束
  strcat(s1, s2);

  printf("s1 = %s\n", s1);

  return 0;
}
```

执行结果

```C
s1 = hello worldabcdef
```



### 四、字符串比较函数

```C
#include <string.h>
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
功能：strcmp是比较两个字符串的内容，strncmp是比较两个字符串的前n个字节是否一样
参数：
  s1、s2：要比较的两个字符串
  n：strncmp中的参数n表示要比较的字节数
返回值：
   0 s1 = s2
  >0 s1 > s2
  <0 s1 < s2
```

```C
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  //使用strcmp比较两个字符串的内容是否一致
  //strcmp函数一个字符一个字符比较，只要出现不一样的，就会立即返回
  char s1[] = "hello";
  char s2[] = "w";

  int ret = strcmp(s1, s2);

  if(ret == 0)
  {
    printf("s1 = s2\n");
  }
  else if(ret > 0)
  {
    printf("s1 > s2\n");
  }
  else
  {
    printf("s1 < s2\n");
  }

  return 0;
}
```

执行结果

```C
s1 < s2
```



### 五、字符查找函数

```C
#include <string.h>
char *strchr(const char *s, int c);
功能：在字符指针s指向的字符串中，找ascii 码为c的字符
参数：
  s：指定的字符串
  c：要查找的字符
返回值：
  成功：找到的字符的地址
  失败：NULL
注意：s指向的字符串中有多个ASCII为c的字符，则找的是第1个字符

char *strrchr(const char *s, int c);
功能：在s指向的字符串中，找最后一次出现的ASCII为c的字符，
```

```C
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  //使用strchr函数在一个字符串中查找字符
  char s[] = "hel6lo wor6ld";
  //找第一个匹配的字符
  char *ret = strchr(s, '6');
  //找最后一个匹配的字符
  //char *ret = strrchr(s, '6');

  if(ret == NULL)
  {
    printf("没有找到\n");
  }
  else
  {
    printf("找到了，在数组的第%d个位置\n", ret ‐ s);
  }

  return 0;
}
```

执行结果

```C
找到了，在数组的第3个位置
```



### 六、字符串匹配函数

```C
#include <string.h>
char *strstr(const char *haystack, const char *needle);
函数说明：
  在haystack指向的字符串中查找needle指向的字符串，也是首次匹配
返回值：
  找到了：找到的字符串的首地址
  没找到：返回NULL
```

```C
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  //使用strstr函数在一个字符串中查找另一个字符串
  char s[] = "1234:4567:666:789:666:7777";

  //strstr查找的时候，查找的是第二个参数的第一个\0之前的内容
  char *ret = strstr(s, "666");

  if(ret == NULL)
  {
    printf("没找到\n");
  }
  else
  {
    printf("找到了，在当前字符串的第%d个位置\n", ret ‐ s);
  }
  return 0;
}
```

执行结果

```C
找到了，在当前字符串的第10个位置
```



### 七、字符串转换数值

```C
#include <stdlib.h>
int atoi(const char *nptr);
功能：将一个数字型字符串转化为整形数据
参数：
  nptr：指定的字符串
返回值：
  获取到的整形数据
```

```C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //使用atoi将数字型字符串转化为整形数据
  char s1[] = "7856";
  int ret1 = atoi(s1);

  printf("ret1 = %d\n", ret1);
  
  //使用atof将浮点型的字符串转化为浮点型数据
  char s2[] = "3.1415926";
  double ret2 = atof(s2);

  printf("ret2 = %lf\n", ret2);

  return 0;
}
```

执行结果

```C
ret1 = 7856
ret2 = 3.141593
```



### 八、字符串切割函数

```C
#include <string.h>
char *strtok(char *str, const char *delim);
功能：对字符串进行切割
参数：
  str：要切割的字符串
  第一次切割，就传入指定的字符串，后面所有次的切割传NULL
  delim：标识符，要根据指定的delim进行切割，切割的结果不包含delim
返回值：
  返回切割下来的字符串的首地址，如果都切割完毕，则返回NULL
```

```C
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  //使用strtok函数切割字符串
  char s[] = "111:22222:33:4444444444:5555555555555";
  char *ret;

  //第一次切割
  ret = strtok(s, ":");
  printf("ret = %s\n", ret);

  //后面所有切割时都要将strtok的第一个参数传NULL
  while((ret = strtok(NULL, ":")) != NULL)
  {
    printf("ret = %s\n", ret);
  }

  return 0;
}
```

执行结果

```C
ret = 111
ret = 22222
ret = 33
ret = 4444444444
ret = 5555555555555
```

### 九、格式化字符串操作函数

```C
#include <stdio.h>
int sprintf(char *str, const char *format, ...);
功能：将按照格式保存的字符串复制给str
参数：
  str：保存字符串
  format：同printf
返回值：
  保存的字符串的字节数


#include <stdio.h>
int sscanf(const char *str, const char *format, ...);
功能：scanf是从终端读取数据并赋值给对应变量，而sscanf是从第一个参数中读取数据
参数：
  str：指定要获取内容的字符串
  format：按照格式获取数据保存在变量中
返回值：
  成功获取的个数
```

#### 9.1 sprintf和sscanf的基本用法

```C
//sprintf和sscanf的基本用法
void test1()
{
  char buf[20];
  int a, b, c;

  sprintf(buf,"%d:%d:%d",2013,10,1);
  printf("buf = %s\n",buf);

  sscanf("2013:10:1", "%d:%d:%d", &a, &b, &c);
  printf("a=%d,b=%d,c=%d\n",a,b,c);
}
```

执行结果

```C
buf = 2013:10:1
a=2013,b=10,c=1
```



#### 9.2 sscanf高级用法

```C
//sscanf高级用法
void test2()
{
  //1、跳过数据：%*s或%*d
  char buf1[20];
  sscanf("1234 5678","%*d %s",buf1);
  printf("%s\n",buf1);

  //2、读指定宽度的数据：%[width]s
  char buf2[20];
  sscanf("12345678","%4s ",buf2);
  printf("%s\n",buf2);

  //3、支持集合操作：只支持获取字符串
  // %[a‐z] 表示匹配a到z中任意字符(尽可能多的匹配)
  // %[aBc] 匹配a、B、c中一员，贪婪性
  // %[^aFc] 匹配非a、F、c的任意字符，贪婪性
  // %[^a‐z] 表示读取除a‐z以外的所有字符
  char buf3[20];
  sscanf("agcd32DajfDdFF","%[a‐z]",buf3);
  printf("%s\n",buf3);
}
```

执行结果

```C
5678
1234
agcd
```



### 十、const

```C
#include <stdio.h>

//const修饰全局变量
//此时全局变量只能使用但是不能修改，
//如果直接拿全局变量修改值，编译直接报错
//如果使用全局变量的地址修改值，运行时程序异常结束
const int a = 100;
void test1()
{
  printf("a = %d\n", a);

  //a = 666;
  //printf("a = %d\n", a);

  int *p = &a;
  *p = 888;
  printf("a = %d\n", a);
}

//const修饰普通局部变量
//可以读取变量的值
//不能直接通过变量进行修改值，编译报错
//可以通过变量的地址修改值
void test2()
{
  const int b = 100;
  printf("b = %d\n", b);

  //b = 666;
  //printf("b = %d\n", b);

  int *p = &b;
  *p = 888;
  printf("b = %d\n", b);
}

    //const修饰指针变量
    //如果const修饰指针变量的类型，无法通过指针变量修改地址里面的值
    //如果const修饰指针变量，无法修改指针变量保存的地址
    //如果const既修饰指针变量的类型，又修饰指针变量，则只能通过原本变量修改值
void test3()
{
  int c = 100;
  //const修饰指针变量的类型
  //const int * p = &c;
  //const修饰指针变量
  //int * const p = &c;
  //const既修饰指针变量的类型，又修饰指针变量
  const int * const p = &c;
  printf("*p = %d\n", *p);

  c = 666;
  printf("*p = %d\n", *p);

  *p = 777;
  printf("*p = %d\n", *p);

  int d = 888;
  p = &d;
  printf("*p = %d\n", *p);
}

int main(int argc, char *argv[])
{
  test3();

  return 0;
}
```



**彩蛋**🎁

当你走在灿烂的阳光下，你会惊奇地发现，生命的一切及苦难，不过是在插满尖玻璃的墙头上行走。

- 塞斯·诺特博姆《狐狸在夜晚来临》

恭喜你🎉，完成了对第七章《字符串处理函数》部分的学习，下一章我们将学习结构体，共用体，枚举。

⏩第八章 《结构体，共用体，枚举》

## 第八章 结构体，共用体，枚举

### 一、结构体类型的概念及定义

#### 1.1 基本概述

**构造类型：**
不是基本类型的数据结构也不是指针，它是若干个相同或不同类型的数据构成的集合
常用的构造类型有数组、结构体、共用体


数组用于保存多个相同类型的数据
结构体用于保存多个不同类型的数据



#### 1.2 结构体的概念

结构体是一种构造类型的数据结构，

是一种或多种基本类型或构造类型的数据的集合。



#### 1.3 结构体类型的定义

**1.3.1 先定义结构体类型，再去定义结构体变量**

```C
struct 结构体类型名{
  成员列表
};
```

例子：

```C
struct stu{
  int num;
  char name[20];
  char sex;
};
```

//有了结构体类型后，就可以用类型定义变量了

`struct stu lucy, bob, lilei;`    //定义了三个struct stu类型的变量，注意不要把struct省略

每个变量都有三个成员，分别是`num` `name` `sex`



**1.3.2 在定义结构体类型的时候顺便定义结构体变量，以后还可以定义结构体变量**

```C
struct 结构体类型名{
  成员列表;
}结构体变量1,变量2;
struct 结构体类型名 变量3，变量4；
```

例子：

```C
struct stu{
  int num;
  char name[20];
  char sex;
}lucy,bob,lilei;
struct stu xiaohong,xiaoming;
```

注意：一般结构体类型都会定义在全局，也就是main函数的外面。

所以在定义结构体类型的同时定义变量，这些变量一般都是全局变量。

定义完类型之后定义的结构体变量内存分配要看定义的位置。



**1.3.3 无名结构体的定义**

在定义结构体类型的时候，没有结构体类型名，顺便定义结构体变量，因为没有类型名，所以以后不能再定义相关类型的数据了

```C
struct {
  成员列表;
}变量1，变量2;
```

注意：无名结构体由于没有结构体名，所以定义完之后是无法在定义结构体变量的，只能在定义类型的同时定义结构体变量。

例子：

```C
struct {
  int num;
  char name[20];
  char sex;
}lucy,bob;
```



**1.3.4 给结构体类型取别名**

通常咱们将一个结构体类型重新起个类型名，用新的类型名替代原先的类型

```C
typedef struct 结构体名 {
  成员列表;
}重新定义的结构体类型名A;
```

注意：typedef主要用于给一个类型取别名，此时相当于给当前结构体重新起了一个类型名为A，相当于 struct 结构体名，所以如果结构体要取别名，一般不需要先给结构体定义名字，定义结构体变量时，直接使用A即可，不用加struct

例子：

```C
typedef struct stu{
  int num;
  char name[20];
  char sex;
}STU;
```

以后STU 就相当于 struct stu

`STU lucy;` 和`struct stu lucy;` 是等价的，所以可以不指定stu这个名字



### 二、结构体变量的定义初始化及使用

#### 2.1 结构体变量的定义和初始化

结构体变量，是个变量，这个变量是若干个数据的集合

注：

(1)：在定义结构体变量之前首先得有结构体类型，然后在定义变量

(2)：在定义结构体变量的时候，可以顺便给结构体变量赋初值，被称为结构体的初始化

(3)：结构体变量初始化的时候，各个成员顺序初始化

案例：

```C
#include <stdio.h>

  //定义结构体类型
struct stu{
  int id;
  char name[32];
  char sex;
  int age;
  //定义结构体变量之定义结构体类型的同时定义结构体变量
}zhangsan, lisi = {1002, "李四", 'B', 25};

  //使用typedef对结构体类型取别名
typedef struct{
  int a;
  int b;
  char c;
}MSG;

int main(int argc, char *argv[])
{
//定义结构体变量之类型定义完毕之后定义变量
  struct stu wangwu;
  //结构体变量的初始化
  struct stu zhaoliu = {1001, "赵六", 'B', 20};

  //如果使用typedef对结构体类型取别名
  //就无法在定义类型的同时定义结构体变量
  //在定义结构体变量的时候不用加struct
  MSG msg1, msg2 = {100, 200, 'w'};

  return 0;
}
```



#### 2.2 结构体变量的使用

结构体变量对成员调用的方式：

```C
结构体变量.结构体成员
```

注意：这地方说的结构体变量主要指的是普通结构体变量



**2.2.1 结构体变量的简单使用**

```C
#include <stdio.h>
#include <string.h>

struct stu{
  int id;
  char name[32];
  char sex;
  int age;
}zhangsan, lisi = {1002, "李四", 'B', 25};

typedef struct{
  int a;
  int b;
  char c;
}MSG;

int main(int argc, char *argv[])
{
  struct stu wangwu;
  struct stu zhaoliu = {1001, "赵六", 'B', 20};

  MSG msg1, msg2 = {100, 200, 'w'};

  //结构体变量的使用
  zhangsan.id = 1001;
  strcpy(zhangsan.name, "张三");
  zhangsan.sex = 'B';
  zhangsan.age = 18;
  printf("%d ‐ %s ‐ %c ‐ %d\n", zhangsan.id, zhangsan.name,zhangsan.sex, zhangsan.age);
  printf("%d ‐ %s ‐ %c ‐ %d\n", lisi.id, lisi.name,lisi.sex, lisi.age);
  printf("%d ‐ %s ‐ %c ‐ %d\n", zhaoliu.id, zhaoliu.name,zhaoliu.sex, zhaoliu.age);
  printf("%d ‐ %d ‐ %c\n", msg2.a, msg2.b, msg2.c);

  return 0;
}
```

执行结果

```C
1001 - 张三 - B - 18
1002 - 李四 - B - 25
1001 - 赵六 - B -20
100 - 200 - W
```



**Question：**

为什么这个时候不能直接给year赋值？

```C
typedef struct{ 
  int year;
  int month;
  int day;             
}BD;
```

**Answer：**

上述代码定义了一个结构体类型 `BD`，但它仅仅是一个类型的声明，没有创建任何具体的变量。因此，您不能直接给 `year`、`month` 或 `day` 赋值，因为这些成员是结构体内部的成员，需要通过结构体变量来访问和赋值。

您可以理解为 `BD` 类型是一种用户自定义的数据类型，类似于 `int` 或其他基本数据类型。在使用它时，需要创建具体的变量，然后通过这些变量来操作其成员。

例如，在使用 `BD` 类型时，您需要先创建一个 `BD` 类型的变量，然后通过该变量来访问和赋值其成员变量 `year`、`month` 和 `day`，就像前面的示例所示。

```C
BD birthday; // 创建一个BD类型的变量

birthday.year = 1990; // 给year成员变量赋值
birthday.month = 9;   // 给month成员变量赋值
birthday.day = 15;    // 给day成员变量赋值
```

这个变量 `birthday` 才是具体存储数据的实例，而 `BD` 只是定义了这种类型的数据结构。



**2.2.2 在结构体中嵌套结构体**

```C
//在结构体中嵌套结构体
typedef struct{
  int year;
  int month;
  int day;
}BD;

typedef struct{
  int id;
  char name[32];
  BD birthday;
}STU;

void test2()
{
  STU xiaoming;
  xiaoming.id = 1001;
  strcpy(xiaoming.name, "小明");
  //如果结构体中嵌套结构体，赋值时找到最内层的成员再进行赋值
  xiaoming.birthday.year = 2002;
  xiaoming.birthday.month = 12;
  xiaoming.birthday.day = 20;
  
  printf("%d ‐ %s ‐ %d‐%d‐%d\n", xiaoming.id, xiaoming.name,\
  xiaoming.birthday.year, xiaoming.birthday.month,\
  xiaoming.birthday.day);

  //嵌套的形式定义并初始化
  STU xiaoli = {1002, "小丽", 2000, 1, 1};
  printf("%d ‐ %s ‐ %d‐%d‐%d\n", xiaoli.id, xiaoli.name,\
  xiaoli.birthday.year, xiaoli.birthday.month,\
  xiaoli.birthday.day);
}
```

执行结果

```C
1001 - 小明 - 2002-12-20
1002 - 小丽 - 2000-1-1
```



#### 2.3 相同类型的结构体变量可以相互赋值

```C
#include <stdio.h>
#include <string.h>

struct stu{
  int id;
  char name[32];
  char sex;
  int age;
};

int main(int argc, char *argv[])
{
  struct stu zhangsan;
  zhangsan.id = 1001;
  strcpy(zhangsan.name, "张三");
  zhangsan.sex = 'B';
  zhangsan.age = 18;
  printf("%d ‐ %s ‐ %c ‐ %d\n", zhangsan.id, zhangsan.name,\
    zhangsan.sex, zhangsan.age);

  //相同类型的结构体变量之间可以直接赋值
  struct stu lisi;
  lisi = zhangsan;
  printf("%d ‐ %s ‐ %c ‐ %d\n", lisi.id, lisi.name,\
    lisi.sex, lisi.age);

  return 0;
}
```

这是我优化后的代码：

```C
#include<stdio.h>

typedef struct
{
    int id;
    char name[32];
    char sex;
    int age;
}STU;

int main(int argc, char *argv[])
{
    STU zhangsan = {1001, "张三", 'B', 18};
    printf("%d - %s - %c - %d\n",zhangsan.id,zhangsan.name,\
            zhangsan.sex,zhangsan.age);

    //相同类型的结构体变量之间可以直接赋值
    STU lisi;
    lisi = zhangsan;
    printf("%d - %s - %c - %d\n",lisi.id,lisi.name,\
            lisi.sex,lisi.age);
    
    return 0;
}
```

执行结果

```C
1001 - 张三 - B - 18
1001 - 张三 - B - 18
```



### 三、结构体数组

结构体数组是个数组，由若干个相同类型的结构体变量构成的集合

**1、结构体数组的定义方法**

```C
struct 结构体类型名 数组名[元素个数];
```

例子：

```C
struct stu{
  int num;
  char name[20];
  char sex;
};
  struct stu edu[3];
  定义了一个struct stu 类型的结构体数组edu，
  这个数组有3个元素分别是edu[0] 、edu[1]、edu[2]
```

**2、结构体数组元素的引用**

```C
数组名[下标]
```

**3、结构体数组元素对成员的使用**

```C
数组名[下标].成员
```

案例：

```C
#include <stdio.h>

typedef struct{
  int num;
  char name[20];
  float score;
}STU;

int main(int argc, char *argv[])
{
  //定义一个结构体数组
  STU edu[3] = {
    {101,"Lucy",78},
    {102,"Bob",59.5},
    {103,"Tom",85}
  };

  //输出结构体数组中的元素
  int j;
  for(j = 0; j < 3; j++)
  {
    printf("%d ‐ %s ‐ %.2f\n", edu[j].num, edu[j].name,\
    edu[j].score);
  }

  int i;
  float sum=0;
  for(i = 0; i < 3; i++)
  {
    sum += edu[i].score;
  }

  printf("平均成绩为%.2f\n",sum / 3);

  return 0;
}
```

执行结果

```C
101 - Lucy - 78.00
102 - Bob - 59.50
103 - Tom - 85.00
平均成绩为74.17
```



### 四、结构体指针

即结构体的地址，结构体变量存放内存中，也有起始地址

咱们定义一个变量来存放这个地址，那这个变量就是结构体指针变量。

1、结构体指针变量的定义方法：

```C
struct 结构体类型名 * 结构体指针变量名;
```

2、结构体指针变量对成员的引用

```C
 (*结构体指针变量名).成员
  结构体指针变量名‐>成员
```

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu{
    int id;
    char name[32];
    char sex;
    int age;
};

int main(int argc, char *argv[])
{
    //定义一个结构体指针变量
    struct stu *s;
    //在堆区开辟结构体空间并将其地址保存在结构体指针变量中
    s = (struct stu *)malloc(sizeof(struct stu));

    s->id = 1001;
    strcpy(s->name, "张三");
    s->sex = 'B';
    s->age = 20;

    printf("%d - %s - %c - %d\n", s->id, s->name, s->sex, s->age);

    return 0;
}
```

执行结果

```C
 1001 - 张三 - B - 20
```



### 五、结构体内存分配问题

```C
#include<stdio.h>
struct stu{
  char sex;
  int age;
}lucy;
int main()
{
  printf("%d\n",sizeof(lucy));  //结果为 8？？？
  return 0;
}
```

**引言：**

结构体变量大小是它的所有成员之和，那么为什么上述例子中sizeof(lucy)不是1+4=5而是8呢？❓

结构体变量究竟是怎么分配内存的呢？❓

请看下文🕵‍(侦探)



实际给结构体变量分配内存的时候，是规则的

**规则1：以多少个字节为单位开辟内存**

给结构体变量分配内存的时候，会去结构体变量中找基本类型的成员

哪个基本类型的成员占字节数多，就以它大大小为单位开辟内存,

在gcc中出现了double类型的例外

(1)：成员中只有char型数据 ，以1字节为单位开辟内存。

(2)：成员中出现了short 类型数据，没有更大字节数的基本类型数据。以2字节为单位开辟内存

(3)：出现了int 、float 没有更大字节的基本类型数据的时候以4字节为单位开辟内存。

(4)：出现了double类型的数据

情况1：

在vc里，以8字节为单位开辟内存。

情况2：

在gcc里，以4字节为单位开辟内存。

无论是那种环境，double型变量，占8字节。

(5)：如果在结构体中出现了数组，数组可以看成多个变量的集合。

  如果出现指针的话，没有占字节数更大的类型的，以4字节为单位开辟内存。

(6)：在内存中存储结构体成员的时候，按定义的结构体成员的顺序存储。



**规则2：字节对齐**

(1)：char    1字节对齐 ，即存放char型的变量，内存单元的编号是1的倍数即可。

(2)：short    2字节对齐 ，即存放short int 型的变量，起始内存单元的编号是2的倍数即可。

(3)：int     4字节对齐 ，即存放int 型的变量，起始内存单元的编号是4的倍数即可。

(4)：long     在32位平台下，4字节对齐 ，即存放long int 型的变量，起始内存单元的编号是4的倍数即可。

(5)：float     4字节对齐 ，即存放float 型的变量，起始内存单元的编号是4的倍数即可。

(6)：double

a.vc环境下

8字节对齐，即存放double型变量的起始地址，必须是8的倍数，double变量占8字节。

b.gcc环境下

4字节对齐，即存放double型变量的起始地址，必须是4的倍数，double变量占8字节。

注意：

当结构体成员中出现数组的时候，可以看成多个变量。

开辟内存的时候，从上向下依次按成员在结构体中的位置顺序开辟空间



例子：temp占 8 个字节

```C
#include<stdio.h>
struct stu{
  char a;
  short int b;
  int c;
}temp;
int main()
{
  printf("%d\n",sizeof(temp));
  printf("%p\n",&(temp.a));
  printf("%p\n",&(temp.b));
  printf("%p\n",&(temp.c));
  return 0;
}
```

这是具体分配内存的图示

![08_Struct_common-body_enumeration_image_6.png](https://testingcf.jsdelivr.net/gh/EddyCliff/ChartBed/Embedded_high-level_C_programming/08_Struct_common-body_enumeration_image%206.png)

结果分析：

a 的地址和 b 的地址差 2 个字节

b 的地址和 c 的地址差 2 个字节



例子：temp 的大小为 12 个字节

```C
struct stu{
  char a;
  int c;
  short int b;
}temp;
```

![08_Struct_common-body_enumeration_image_7.png](https://testingcf.jsdelivr.net/gh/EddyCliff/ChartBed/Embedded_high-level_C_programming/08_Struct_common-body_enumeration_image%207.png)

结果分析：

a 和 c 的地址差 4 个字节

c 和 b 的地址差 4 个字节



例子：

```C
struct stu{
  char a;
  double b;
}temp;
```

结果分析;

在 vc 中占 16 个字节 a 和 b 的地址差 8 个字节

在 gcc 中占 12 个字节 a 和 b 的地址差 4 个字节



例子：

```C
struct stu{
  int num;
  int age;
}lucy;
  8字节

struct stu{
  char sex;
  int age;
}lucy;
  8字节

struct stu{
  char a;
  short int b;
  int c;
}temp;
  8字节

struct stu{
  char a;
  int c;
  short int b;
}temp;
  12字节

struct stu{
  char buf[10];
  int a;
}temp;
  16字节
  
struct stu{
  char a;
  double b;
};
  12字节
```

为什么要有字节对齐？

用空间来换时间，提高cpu读取数据的效率



看到这里的话，恭喜你，已经掌握了结构体的基本知识。🏅

本章已过完1/3，下一节，我们将对《位段》进行学习。⏩



### 六、位段

**引言：**

位段是偏底层的内容

目前做应用层的话只需了解即可

我目前也不知道这是做什么的😶‍🌫️(迷茫)



一、位段

在结构体中，以位为单位的成员，咱们称之为位段(位域)。

struct packed_data{

unsigned int a:2;

unsigned int b:6;

unsigned int c:4;

unsigned int d:4;

unsigned int i;

} data;

![08_Struct_common-body_enumeration_image_8.png](https://testingcf.jsdelivr.net/gh/EddyCliff/ChartBed/Embedded_high-level_C_programming/08_Struct_common-body_enumeration_image%208.png)

注意：不能对位段成员取地址

```C
#include<stdio.h>
struct packed_data{
  unsigned int a:2;
  unsigned int b:6;
  unsigned int c:4;
  unsigned int d:4;
  unsigned int i;
} data;

int main()
{
  printf("%d\n",sizeof(data));
  printf("%p\n",&data);
  printf("%p\n",&(data.i));
  return 0;
}
```



**位段注意：**

1、对于位段成员的引用如下：

data.a =2

赋值时，不要超出位段定义的范围;

如段成员a定义为2位，最大值为3,即（11）2

所以data.a =5，就会取5的低两位进行赋值 101

2、位段成员的类型必须指定为整形或字符型

3、一个位段必须存放在一个存储单元中，不能跨两个单元

第一个单元空间不能容纳下一个位段，则该空间不用，而从下一个单元起存放该位段。



**位段的存储单元：**

(1)：char型位段 存储单元是1个字节

(2)：short int型的位段存储单元是2个字节

(3)：int的位段，存储单元是4字节

(4)：long int的位段，存储单元是4字节

```C
struct stu{
  char a:7;
  char b:7;
  char c:2;
}temp;//占3字节，b不能跨 存储单元存储
```

```C
#include<stdio.h>
struct stu{
  char a:7;
  char b:7;
  char c:2;
}temp;
int main()
{
  printf("%d\n",sizeof(temp));
  return 0;
}
  结果为：3 ，证明位段不能跨其存储单元存储
```

注意：不能 取 temp.b的地址，因为b可能不够1字节，不能取地址。



4、位段的长度不能大于存储单元的长度

(1)：char型位段不能大于8位

(2)：short int型位段不能大于16位

(3)：int的位段，位段不能大于32位

(4)：long int的位段，位段不能大于32位

```C
#include<stdio.h>
struct stu{
  char a:9;
  char b:7;
  char c:2;
}temp;

int main()
{
  printf("%d\n",sizeof(temp));
  return 0;
}
  分析：
  编译出错，位段a不能大于其存储单元的大小
```



5、如一个段要从另一个存储单元开始，可以定义：

unsigned char a:1;

unsigned char b:2;

unsigned char :0;

unsigned char c:3;(另一个单元)

由于用了长度为0的位段，其作用是使下一个位段从下一个存储单元开始存放

将a、b存储在一个存储单元中，c另存在下一个单元

```C
#include<stdio.h>
struct m_type{
  unsigned char a:1;
  unsigned char b:2;
  unsigned char :0;
  unsigned char c:3;
};
int main()
{
  struct m_type temp;
  printf("%d\n",sizeof(temp));
  return 0;
}
```



6、可以定义无意义位段,如：

unsigned a: 1;

unsigned : 2;

unsigned b: 3;

```C
struct data{
  char a:1;
  char b:1;
  char c:1;
  char d:1;
  char e:1;
  char f:1;
  char g:1;
  char h:1;
}temp;
int main()
{
  char p0;
  //p0=0x01;// 0000 0001
  temp.a=1;
  //p0=temp;//错的，类型不匹配
  //p0=(char)temp;//错的，编译器不允许将结构体变量，强制转成基本类型的。
  p0 = *((char *)(&temp));
}
```

​

指定对齐原则：

使用#pragma pack改变默认对其原则

格式：

#pragma pack (value)时的指定对齐值value。

📢 这个部分可以先不学习，一般情况下都是用的默认对齐原则



### 七、共用体

1：共用体和结构体类似，也是一种构造类型的数据结构。

- 既然是构造类型的，咱们得先定义出类型，然后用类型定义变量。

- 定义共用体类型的方法和结构体非常相似，把struct 改成union 就可以了。

- 在进行某些算法的时候，需要使几种不同类型的变量存到同一段内存单元中，几个变量所使用空间相互重叠。

    这种几个不同的变量共同占用一段内存的结构，在C语言中，被称作“共用体”类型结构

- 共用体所有成员占有同一段地址空间

- 共用体的大小是其占内存长度最大的成员的大小



**共用体的特点：**

1、同一内存段可以用来存放几种不同类型的成员，但每一瞬时只有一种起作用

2、共用体变量中起作用的成员是最后一次存放的成员，在存入一个新的成员后原有的

成员的值会被覆盖

3、共用体变量的地址和它的各成员的地址都是同一地址

4、共用体变量的初始化union data a={123}; 初始化共用体为第一个成员

```C
#include <stdio.h>

  //定义一个共用体
union un{
  int a;
  int b;
  int c;
};

int main(int argc, char *argv[])
{
  //定义共用体变量
  union un myun;
  myun.a = 100;
  myun.b = 200;
  myun.c = 300;

  printf("a = %d, b = %d, c = %d\n", myun.a, myun.b, myun.c);

  return 0;
}
```

执行结果

```C
a = 300, b = 300, c = 300
```



### 八、枚举

将变量的值一一列举出来，变量的值只限于列举出来的值的范围内

枚举类型也是个构造类型的



1、枚举类型的定义

```C
enum 枚举类型名{
  枚举值列表；
};
```

在枚举值表中应列出所有可用值,也称为枚举元素

枚举变量仅能取枚举值所列元素



2、枚举变量的定义方法

```C
enum 枚举类型名 枚举变量名;
```

① 枚举值是常量,不能在程序中用赋值语句再对它赋值

例如：sun=5; mon=2; sun=mon; 都是错误的.

② 枚举元素本身由系统定义了一个表示序号的数值

默认是从0开始顺序定义为0，1，2…

如在week中，mon值为0，tue值为1， …,sun值为6

③ 可以改变枚举值的默认值：如

```C
enum week //枚举类型
{
  mon=3，tue，wed，thu，fri=4，sat,sun
};

  mon=3 tue=4,以此类推
  fri=4 以此类推
```

注意：在定义枚举类型的时候枚举元素可以用等号给它赋值，用来代表元素从几开始编号

在程序中，不能再次对枚举元素赋值，因为枚举元素是常量。

```C
#include <stdio.h>

//定义一个枚举类型
enum week
{
    mon=8, tue, wed, thu=2, fri, sat, sun
};

int main(int argc, char *argv[])
{
  //定义枚举类型的变量
  enum week day = mon;
  printf("day = %d\n", day);
  
  day = fri;
  printf("day = %d\n", day);

  return 0;
}
```

执行结果

```C
day = 8
day = 3
```



**彩蛋**🎁

我时常想，做学问，做事业，在人生中都只能算是第二桩事。人生第一桩事是生活。我所谓的“生活”是“领略”，是“培养生机”。假若为学问为事业而忘却生活，那种学问，事业在人生中便失去其真正意义与价值。

- 朱光潜《给青年的十二封信》

恭喜你🎉，完成了对第八章《结构体，共用体，枚举》部分的学习，下一章我们将学习链表。

⏩第九章《链表》



