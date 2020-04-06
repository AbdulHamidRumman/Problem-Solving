#include <stdio.h>

int main()
{
    int t;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        n = n*n;
        printf("%lld\n",n);
    }
    return 0;
}
