#include <bits/stdc++.h>
using namespace std;

bool mark[1000005];
void sieve()
{
    int i,j,limit = sqrt(1000000*1.0)+1;
    mark[0] = true;
    mark[1] = true;
    for(i=4;i<= 1000000;i+=2)
        mark[i] = true;
    for(i=3;(i*i)<= 1000000;i+=2)
    {
        if(!mark[i])
        {
            if(i<=limit)
            {
                for(j=(i*i);j<= 1000000;j+=i+i)
                    mark[j] = true;
            }
        }
    }
    return;
}


int main()
{
    sieve();
    int N,x;
    scanf(" %d",&N);
    while(N--)
    {
        scanf("%d",&x);
        if(!mark[x])
            printf("%d is a prime number.\n",x);
        else
            printf("%d is not a prime number.\n",x);
    }
    return 0;
}
