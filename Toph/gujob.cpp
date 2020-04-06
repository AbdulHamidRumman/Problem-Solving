#include <bits/stdc++.h>
using namespace std;

int n[1000];
int main()
{
    int N,M,i,a,b,c=0;
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++)
        scanf("%d",&n[i]);
    for(i=0;i<M;i++)
    {
        scanf("%d%d",&a,&b);
        a--;
        b--;
        if(!n[a])
            n[b]--;
        else if(!n[b])
            n[a]--;
    }
    for(i=0;i<N;i++)
    {
        if(n[i]<=0)
            c++;
    }
    printf("%d\n",c);
    return 0;
}
