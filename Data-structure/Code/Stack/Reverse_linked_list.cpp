//linked list reversal using stack
#include<iostream>
#include<stack>
struct Node
{
    int data;
    struct Node *next;
};

/** 
 * @brief: Briefly describe the function of your function
 * @details: Provides more details about the function, including its purpose, steps, and caveats.
 * @return {*}
 * @retval: Return Value description
 */
void Reverse()
{
    if(head == NULL)
    {
        return;
    }
    stack<struct Node*> S;

    Node *temp = head;
    //ÈëÕ»
    while (temp != NULL)
    {
        S.push(temp);
        temp = temp->next;
    }

    temp = S.top();
    head = temp;
    S.pop();
    while (!S.emtr)
    {
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->data = NULL;
}