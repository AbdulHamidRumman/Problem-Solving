#include <bits/stdc++.h>
using namespace std;

int phi(int n)
{
    int r = n;
    long long i;
    for(i=2;(i*i)<=n;i++)
    {
        if(!(n%i))
        {
            while(!(n%i))
                n /= i;
            r = r-(r/i);
        }
    }
    if(n>1)
        r = r-(r/n);
    return r;
}

int main()
{
    int N;
    scanf("%d",&N);
    printf("%d\n",phi(N));

    return 0;
}
