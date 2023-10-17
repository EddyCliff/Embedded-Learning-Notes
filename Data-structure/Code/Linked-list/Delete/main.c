/** 
 * @file: main.c
 * @author: EddyCliff
 * @date: 2023-10-13
 * @LastEditTime: 2023-10-13 17:06:38
 * @FilePath: /知乎MarKdownd:/git_repositories/Embedded-Learning-Notes/Data-structure/Code/Linked-list/Delete/main.c
 * @brief: 删除链表中任意位置的元素
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
 * @brief 插入数据到链表的末尾。
 * @details * 这个函数用于在链表的末尾插入新数据，以扩展链表。如果链表为空，新节点将成为链表的唯一元素。
 * 否则，它将被添加到链表的最后一个节点之后。
 * @param [in]{int} data要插入的数据
 * @return None
 * @retval None
 */
void Insert(int data)
{
  //创建一个新节点
  node *newNode = (node *)malloc(sizeof(node));
  newNode->data = data;
  newNode->next = NULL;

  //如果链表为空，将新节点作为头节点
  if (head == NULL)
  {
    head = newNode;
    return;
  }

  //找到链表的末尾
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  //将新节点链接到链表的末尾
  temp->next = newNode;
}


/** 
 * @brief 打印链表中的元素。
 * 这个函数用于打印链表中的所有元素。它会遍历链表并将每个元素的值打印到标准输出。
 * @details 该函数用于输出链表的内容，逐个打印链表中的元素值，以空格分隔。如果链表为空，它将打印 "List is" 后跟一个换行符。
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
 * @brief 删除链表中的指定位置的元素。
 * @details 该函数接受一个整数参数'n',表示要删除的元素在链表中的位置。
 * 如果'n'等于1,函数将删除链表的第一个元素;否则,它将删除指定位置的元素。
 * 删除元素后,函数会释放相应的内存空间,并将链表的链接重新连接以维持链表的连续性。
 * @param [in]{int} n链表中第n个位置
 * @return None
 * @retval None
 */
void Delete(int n)
{
  node *temp1 = head;
  //情况1:删除第1个元素
  if (n == 1)
  {
    head = temp1->next; //head 指向 第2个元素
    free(temp1);
    return;    //当n == 1时，我们不需要执行循环部分，可以提前退出Delete函数
  }
  
  //情况2:删除第n个元素(前后都有元素)
  //想删除第n个元素, 首先要到达第n-1个元素
  //temp1 指向 第n-1个元素
  for (int i = 0; i < n-2; i++)
  {
    temp1 = temp1->next;
  }

  node *temp2 = temp1->next;   //temp2 指向 第n个元素
  temp1->next = temp2->next;   //将第n-1个元素 链接到 第n+1个元素
  free(temp2);                 //释放删除的第n个元素的占用空间
}


int main()
{
  head = NULL;  //空链表
  Insert(2);
  Insert(4);
  Insert(6);
  Insert(5); //List:2 4 6 5 
  Print();

  int n;
  printf("Enter a position\n");
  scanf("%d",&n);
  Delete(n);  //删除链表中第n个位置的元素

  Print();
}