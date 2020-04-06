#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if((n%2))
            printf("%lld\n",2-((n+1)/2));
        else
            printf("%lld\n",-(n/2));

    }
    return 0;
}
