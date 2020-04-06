#include <bits/stdc++.h>
using namespace std;

char num[10005];
int n[10] = {};

int main()
{
    int i,j,m;
    scanf("%s",num);
    for(i=0;num[i]!='\0';i++)
        n[num[i]-'0']++;
    m = 0;
    for(i=0;i<10;i++)
    {
        if(n[m]<n[i])
            m = i;
    }
    printf("%d\n",m);
    return 0;
}
