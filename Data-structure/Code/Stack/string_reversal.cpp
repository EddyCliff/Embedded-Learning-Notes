//string reversal using stack
#include<iostream>
#include<stack>

using namespace std;

/** 
 * @brief: Briefly describe the function of your function
 * @details: Provides more details about the function, including its purpose, steps, and caveats.
 * @param {char} c
 * @param {int} n
 * @return {*}
 * @retval: Return Value description
 */
void Reverse(char c[],int n)
{
    stack<char>S;  //����һ�� �ַ�ջ
    //loop for Push
    for(int i = 0;i < n;i++)
    {
        S.push(c[i]);  //�ַ�ѹ��ջ
    }
    //loop for Pop
    for (int i = 0; i < n; i++)
    {
        c[i]=S.top();
        S.pop();
    }
}
int main()
{
    char s[51];
    printf("Enter a string\n");
    gets(c);
    Reverse(c,strlen(c));
    printf("Output = %s\n",c);
}
