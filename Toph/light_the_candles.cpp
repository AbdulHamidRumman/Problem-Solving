#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,s,l;
    scanf("%d",&t);
    while(t--)
    {
        s = 0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&l);
            s = s+l;
        }
        printf("%d\n",s);
    }
    return 0;
}
