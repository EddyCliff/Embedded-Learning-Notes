#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;

	//�Ա� 1 �� 2 Ů
	int m_Sex;

	//����
	int m_Age;

	//�绰
	string m_Phone;

	//��ַ
	string m_Addr;
};

//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person PersonArray[MAX];

	//ͨѶ¼�е�ǰ��¼������
	int m_Size;
};

//1�������ϵ��
void addPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ��Ѿ���������������������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->PersonArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->PersonArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->PersonArray[abs->m_Size].m_Age = age;

		//�绰
		string phone;
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		abs->PersonArray[abs->m_Size].m_Phone = phone;

		//סַ
		string address;
		cout << "�������ͥ��ַ��" << endl;
		cin >> address;
		abs->PersonArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;	

	}
	
}

//��ӡ��ϵ��
//��ӡ�����е�i����ϵ��
void print(Addressbooks * abs, int i)
{
	cout << "������" << abs->PersonArray[i].m_Name << "\t";
	cout << "�Ա�" << (abs->PersonArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
	cout << "���䣺" << abs->PersonArray[i].m_Age << "\t";
	cout << "�绰��" << abs->PersonArray[i].m_Phone << "\t";
	cout << "��ַ��" << abs->PersonArray[i].m_Addr << endl;
}


//2����ʾ���е���ϵ��
void showPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	if (abs->m_Size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			print(abs, i);
		}
	}
	
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
//����1��ͨѶ¼����
//����2���Ա�����
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



//3��ɾ����ϵ��
void deletePerson(Addressbooks * abs)
{
	cout << "��������Ҫɾ������ϵ������" << endl;
	string name;
	cin >> name;

	//ret == -1 δ�鵽
	//ret != -1 �鵽��
	int ret = isExit(abs, name);
	if (ret != -1)
	{
		for (int i = ret;i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->PersonArray[i] = abs->PersonArray[i + 1];
		}
		abs->m_Size--; //����ͨѶ¼�е�����
		cout << "ɾ���ɹ�" << endl;

	}
	else
	{
		cout << "���޴���" << endl;
	}
}

//4��������ϵ��
void findPerson(Addressbooks * abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExit(abs, name);
	if (ret != -1)
	{
		print(abs, ret);
	}
	else
	{
		cout << "���޴���" << endl;
	}
}

//5���޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks * abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExit(abs, name);
	if (ret != -1)
	{
		cout << "������������" << endl;
		string name;
		cin >> name;
		abs->PersonArray[ret].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->PersonArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->PersonArray[ret].m_Age = age;

		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->PersonArray[ret].m_Phone = phone;

		cout << "�������ַ��" << endl;
		string address;
		cin >> address;
		abs->PersonArray[ret].m_Addr = address;

		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}


}

//6�����������ϵ��
void clearPerson(Addressbooks* abs)
{
	abs->m_Size = 0; //����ǰ��ϵ��������Ϊ0�����߼���ղ���
	cout << "ͨѶ¼�����" << endl;
}

//�˵�����
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl; 
	cout << "*************************" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0; //�����û�����ı���
	while (true)
	{
		showMenu(); //�˵�����

		cin >> select;
		switch (select)
		{
		
		case 1: //1�������ϵ��
			addPerson(&abs);  //���õ�ַ���ݣ���������ʵ��
			break;
		case 2: //2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3: //3��ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4: //4��������ϵ��
			findPerson(&abs);
			break;
		case 5: //5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6: //6�������ϵ��
			clearPerson(&abs);
			break;
		case 0: //0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
	
}
