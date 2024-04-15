#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;

	//性别 1 男 2 女
	int m_Sex;

	//年龄
	int m_Age;

	//电话
	string m_Phone;

	//地址
	string m_Addr;
};

//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person PersonArray[MAX];

	//通讯录中当前记录的人数
	int m_Size;
};

//1、添加联系人
void addPerson(Addressbooks * abs)
{
	//判断通讯录是否已经加满，如果加满则不再添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->PersonArray[abs->m_Size].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->PersonArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		
		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->PersonArray[abs->m_Size].m_Age = age;

		//电话
		string phone;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		abs->PersonArray[abs->m_Size].m_Phone = phone;

		//住址
		string address;
		cout << "请输入家庭地址：" << endl;
		cin >> address;
		abs->PersonArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;	

	}
	
}

//打印联系人
//打印数组中第i个联系人
void print(Addressbooks * abs, int i)
{
	cout << "姓名：" << abs->PersonArray[i].m_Name << "\t";
	cout << "性别：" << (abs->PersonArray[i].m_Sex == 1 ? "男" : "女") << "\t";
	cout << "年龄：" << abs->PersonArray[i].m_Age << "\t";
	cout << "电话：" << abs->PersonArray[i].m_Phone << "\t";
	cout << "地址：" << abs->PersonArray[i].m_Addr << endl;
}


//2、显示所有的联系人
void showPerson(Addressbooks * abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	if (abs->m_Size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			print(abs, i);
		}
	}
	
}

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
//参数1：通讯录参数
//参数2：对比姓名
int isExit(Addressbooks * abs,string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->PersonArray[i].m_Name == name)
		{
			return i;
		}
		else
		{
			return -1;
		}
	}
}



//3、删除联系人
void deletePerson(Addressbooks * abs)
{
	cout << "请输入您要删除的联系人姓名" << endl;
	string name;
	cin >> name;

	//ret == -1 未查到
	//ret != -1 查到了
	int ret = isExit(abs, name);
	if (ret != -1)
	{
		for (int i = ret;i < abs->m_Size; i++)
		{
			//数据前移
			abs->PersonArray[i] = abs->PersonArray[i + 1];
		}
		abs->m_Size--; //更新通讯录中的人数
		cout << "删除成功" << endl;

	}
	else
	{
		cout << "查无此人" << endl;
	}
}

//4、查找联系人
void findPerson(Addressbooks * abs)
{
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExit(abs, name);
	if (ret != -1)
	{
		print(abs, ret);
	}
	else
	{
		cout << "查无此人" << endl;
	}
}

//5、修改指定联系人信息
void modifyPerson(Addressbooks * abs)
{
	cout << "请输入您要修改的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExit(abs, name);
	if (ret != -1)
	{
		cout << "请输入姓名：" << endl;
		string name;
		cin >> name;
		abs->PersonArray[ret].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->PersonArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->PersonArray[ret].m_Age = age;

		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->PersonArray[ret].m_Phone = phone;

		cout << "请输入地址：" << endl;
		string address;
		cin >> address;
		abs->PersonArray[ret].m_Addr = address;

		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}


}

//6、清空所有联系人
void clearPerson(Addressbooks* abs)
{
	abs->m_Size = 0; //将当前联系人数量计为0，做逻辑清空操作
	cout << "通讯录已清空" << endl;
}

//菜单界面
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl; 
	cout << "*************************" << endl;
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前成员个数
	abs.m_Size = 0;

	int select = 0; //创建用户输入的变量
	while (true)
	{
		showMenu(); //菜单调用

		cin >> select;
		switch (select)
		{
		
		case 1: //1、添加联系人
			addPerson(&abs);  //利用地址传递，可以修饰实参
			break;
		case 2: //2、显示联系人
			showPerson(&abs);
			break;
		case 3: //3、删除联系人
			deletePerson(&abs);
			break;
		case 4: //4、查找联系人
			findPerson(&abs);
			break;
		case 5: //5、修改联系人
			modifyPerson(&abs);
			break;
		case 6: //6、清空联系人
			clearPerson(&abs);
			break;
		case 0: //0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
	
}
