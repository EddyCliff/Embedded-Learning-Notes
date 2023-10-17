/** 
 * @file: main.c
 * @author: EddyCliff
 * @date: 2023-10-13
 * @LastEditTime: 2023-10-13 17:06:38
 * @FilePath: /֪��MarKdownd:/git_repositories/Embedded-Learning-Notes/Data-structure/Code/Linked-list/Delete/main.c
 * @brief: ɾ������������λ�õ�Ԫ��
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node *next;
}node;

node* head;

/** 
 * @brief �������ݵ������ĩβ��
 * @details * ������������������ĩβ���������ݣ�����չ�����������Ϊ�գ��½ڵ㽫��Ϊ�����ΨһԪ�ء�
 * ������������ӵ���������һ���ڵ�֮��
 * @param [in]{int} dataҪ���������
 * @return None
 * @retval None
 */
void Insert(int data)
{
  //����һ���½ڵ�
  node *newNode = (node *)malloc(sizeof(node));
  newNode->data = data;
  newNode->next = NULL;

  //�������Ϊ�գ����½ڵ���Ϊͷ�ڵ�
  if (head == NULL)
  {
    head = newNode;
    return;
  }

  //�ҵ������ĩβ
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  //���½ڵ����ӵ������ĩβ
  temp->next = newNode;
}


/** 
 * @brief ��ӡ�����е�Ԫ�ء�
 * ����������ڴ�ӡ�����е�����Ԫ�ء��������������ÿ��Ԫ�ص�ֵ��ӡ����׼�����
 * @details �ú������������������ݣ������ӡ�����е�Ԫ��ֵ���Կո�ָ����������Ϊ�գ�������ӡ "List is" ���һ�����з���
 * @return None
 * @retval None
 */
void Print()
{
  node *temp = head;
  printf("List is");
  while (temp != NULL)
  {
    printf(" %d",temp->data);
    temp = temp->next;
  }
  printf("\n");
}


/** 
 * @brief ɾ�������е�ָ��λ�õ�Ԫ�ء�
 * @details �ú�������һ����������'n',��ʾҪɾ����Ԫ���������е�λ�á�
 * ���'n'����1,������ɾ������ĵ�һ��Ԫ��;����,����ɾ��ָ��λ�õ�Ԫ�ء�
 * ɾ��Ԫ�غ�,�������ͷ���Ӧ���ڴ�ռ�,�����������������������ά������������ԡ�
 * @param [in]{int} n�����е�n��λ��
 * @return None
 * @retval None
 */
void Delete(int n)
{
  node *temp1 = head;
  //���1:ɾ����1��Ԫ��
  if (n == 1)
  {
    head = temp1->next; //head ָ�� ��2��Ԫ��
    free(temp1);
    return;    //��n == 1ʱ�����ǲ���Ҫִ��ѭ�����֣�������ǰ�˳�Delete����
  }
  
  //���2:ɾ����n��Ԫ��(ǰ����Ԫ��)
  //��ɾ����n��Ԫ��, ����Ҫ�����n-1��Ԫ��
  //temp1 ָ�� ��n-1��Ԫ��
  for (int i = 0; i < n-2; i++)
  {
    temp1 = temp1->next;
  }

  node *temp2 = temp1->next;   //temp2 ָ�� ��n��Ԫ��
  temp1->next = temp2->next;   //����n-1��Ԫ�� ���ӵ� ��n+1��Ԫ��
  free(temp2);                 //�ͷ�ɾ���ĵ�n��Ԫ�ص�ռ�ÿռ�
}


int main()
{
  head = NULL;  //������
  Insert(2);
  Insert(4);
  Insert(6);
  Insert(5); //List:2 4 6 5 
  Print();

  int n;
  printf("Enter a position\n");
  scanf("%d",&n);
  Delete(n);  //ɾ�������е�n��λ�õ�Ԫ��

  Print();
}