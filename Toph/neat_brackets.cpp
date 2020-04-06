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
        if(p[i]=='(')
            s.push('(');
        else
        {
            if(s.empty())
                s.push(')');
            else
            {
                if(s.top()=='(')
                    s.pop();
                else
                    s.push(')');
            }
        }
    }
    if(s.empty())
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
