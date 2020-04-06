#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M,N;
    long long n,s;
    while(1)
    {
        scanf("%d%d",&M,&N);
        if(!M && !N)
            break;
        n = (N-M)+1;
        s = (M+N)*n/2;
        printf("%lld %lld\n",n,s);
    }
    return 0;
}
