/** 
 * @file: main.c
 * @author: EddyCliff
 * @date: 2023-10-23
 * @LastEditTime: 2023-10-14 11:43:23
 * @FilePath: /֪��MarKdownd:/git_repositories/Embedded-Learning-Notes/Data-structure/Code/Linked-list/Reverse/main.c
 * @brief: Reverse a linked list ��תһ��������(������ʽʵ��)
 * https://www.bilibili.com/video/BV1Fv4y1f7T1?p=9&vd_source=c57cc7d724946a8cfa6381f148e147d5
 * @copyright (c) 2023 by EddyCliff, All Rights Reserved. 
 */

#include<stdio.h>
#include<stdlib.h>
/** 
 * @struct Node
 * @brief ����ڵ�ṹ�� 
 * @details ����ṹ���ʾһ������ڵ㣬�����ڵ��е����ݺ�ָ����һ���ڵ��ָ�롣
 */
typedef struct Node
{
    int data;
    struct Node* next;
}Node;


/** 
 * @brief ����һ���µĽڵ㡣
 * @details ������������ڴ��Դ����µĽڵ㣬����ʼ���ڵ�����ݺ�ָ�롣
 * �½ڵ�������ɲ���'x'ָ�����ڵ��ָ���ʼ��Ϊ�ա�
 * @param [in]{int} x
 * @return {Node*}newNode ָ���´����ڵ��ָ��
 * @retval NULL ��������ڴ�ʧ�ܻ�����������ʱ������ NULL
 */
Node* GetNewNode(int x)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL; 
    return newNode;
}

/** 
 * @brief �������ݵ������ĩβ��
 * @details: Provides more details about the function, including its purpose, steps, and caveats.
 * @param {Node} *head
 * @param {int} data
 * @return {*}
 * @retval: Return Value description
 */
Node* Insert(Node *head,int data)
{
    Node *temp = GetNewNode(data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *temp1 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    return head;
}

/** 
 * @brief: Briefly describe the function of your function
 * @details: Provides more details about the function, including its purpose, steps, and caveats.
 * @param {Node} *head
 * @return {*}
 * @retval: Return Value description
 */
void Print(Node *head)
{
    while (head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}


/** 
 * @brief Briefly describe the function of your function
 * @details Provides more details about the function, including its purpose, steps, and caveats.
 * @param [in,out]{Node} *head
 * @return {*}
 * @retval: Return Value description
 */
Node* Reverse(struct Node *head)
{
    Node *prev,*current,*next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
int main()
{
    Node *head = NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,8);
    Print(head);
    printf("\n");
    head = Reverse(head);
    Print(head);
}