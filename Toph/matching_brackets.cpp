#include <bits/stdc++.h>
using namespace std;

char p[26];
stack<char> s;
int main()
{
    int i;
    scanf("%[^\n]s ",p);
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]=='(' || p[i]=='{' || p[i]=='[')
            s.push(p[i]);
        else
        {
            if(s.empty())
                s.push(p[i]);
            else
            {
                if(p[i]==')')
                {
                    if(s.top()=='(')
                        s.pop();
                    else
                        s.push(')');
                }
                else if(p[i]=='}')
                {
                    if(s.top()=='{')
                        s.pop();
                    else
                        s.push('}');
                }
                else
                {
                    if(s.top()=='[')
                        s.pop();
                    else
                        s.push(']');
                }
            }
        }
    }
    if(s.empty())
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

