#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isbalanced(string exp)
{
    stack<char>s;
    for(int i=0;i<exp.length();i++)
    {
       if(exp[i]=='{' || exp[i]=='['|| exp[i]=='(')
            {
                s.push(exp[i]);
            }
        else if(exp[i]=='}')
        {
            if(s.top()=='{')
                {
                    s.pop();
                    continue;
                }
                else
                {
                    return false;
                }
        }
        else if(exp[i]==']')
        {
            if(s.top()=='[')
            {
                s.pop();
                continue;
            }
            else
                return false;
        }
        else if(exp[i]==')')
        {
            if(s.top()=='(')
            {
                s.pop();
                continue;
            }
            else
                return false;
        }
        else
            return false;
    }
    if(!s.empty())
        return false;
    else
        return true;
}
int main()
{
    string exp;
    cin>>exp;
    bool y=isbalanced(exp);
    if(y==1)
        cout<<"String is balanced";
    else
        cout<<"String is not balanced";
}
