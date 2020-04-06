#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s[4],i,c=0;
    scanf("%d %d %d %d",&s[0],&s[1],&s[2],&s[3]);
    sort(s,s+4);
    for(i=0;i<3;i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    printf("%d\n",c);

    return 0;
}
