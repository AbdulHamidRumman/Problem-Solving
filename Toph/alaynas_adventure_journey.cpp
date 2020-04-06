#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long x,m=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&x);
        if(m<x)
            m = x;
    }
    printf("%lld\n",m);

    return 0;
}
