#include <bits/stdc++.h>
using namespace std;

int player[2][150];
int main()
{
    int n,i,j,mx=0,d;
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&player[i][j]);
    }
    for(j=0;j<n;j++)
    {
        d = ((player[0][j])*20)-((player[1][j])*10);
        if(mx<d)
            mx = d;
    }
    printf("%d\n",mx);
    return 0;
}
