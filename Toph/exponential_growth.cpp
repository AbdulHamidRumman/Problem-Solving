#include <bits/stdc++.h>
using namespace std;

int bigmod(long long a,long long b)
{
    if(!b)
        return (1%1000000007);
    long long x = bigmod(a,b/2);
    x = (x*x)%1000000007;
    if((b%2))
        x = (x*a)%1000000007;
    return x;
}

int main()
{
    long long x,n;
    scanf("%lld %lld",&x,&n);
    printf("%lld\n",bigmod(x,n));
    return 0;
}
