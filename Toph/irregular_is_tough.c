#include <stdio.h>

int main()
{
    int t,i,n;
    unsigned long long p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        p = n*(n-1)*(n-2)*(n-3)/24;
        printf("Case %d: %llu\n",i,p);
    }
    return 0;
}
