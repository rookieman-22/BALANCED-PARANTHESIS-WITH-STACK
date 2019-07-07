#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool ispair(char a,char b)
{
    if((a==']'&&b=='[')||(a=='}'&&b=='{')||(a==')'&&b=='('))
        return true;
    else
        return false;
}
bool isbalanced(string exp)
{
     stack<char>s;
     for(int i=0;i<exp.length();i++)
     {
         if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
               {
                   s.push(exp[i]);
                   continue;
               }
         if(exp[i]=='}'||exp[i]==']'||exp[i]==')')
         {
             if(s.empty())
              return false;
            else
            {
             bool x=ispair(exp[i],s.top());
                if(x==1)
                {
                    s.pop();
                    continue;
                }
             else
                return false;
            }
        }
}
 if(!s.empty())
        return false;
     else return true;
}
int main()
{
  string exp;
  cout<<"Enter string: ";
  cin>>exp;
  bool y=isbalanced(exp);
  if(y==1)
    cout<<"String is balanced";
  else
    cout<<"String is not balanced";
}

