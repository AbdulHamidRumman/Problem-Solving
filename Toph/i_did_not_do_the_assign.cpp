#include <bits/stdc++.h>
using namespace std;

bool mark[1001];
void sieve()
{
    int i,j,l = sqrt(1000*1.0)+1;
    mark[0] = true;
    mark[1] = true;
    for(i=4;i<=1000;i+=2)
        mark[i] = true;
    for(i=3;(i*i)<=1000;i+=2)
    {
        if(!mark[i])
        {
            if(i<=l)
            {
                for(j=(i*i);j<=1000;j+=i+i)
                    mark[j] = true;
            }
        }
    }
    return;
}

int main()
{
    int n;
    sieve();
    scanf("%d",&n);
    if(!mark[n])
        printf("NO PUNISHMENT\n");
    else
    {
        while(n--)
            printf("I DID NOT DO THE ASSIGNMENT.\n");
    }
    return 0;
}
