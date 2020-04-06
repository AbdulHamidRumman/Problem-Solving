//BUG
#include <bits/stdc++.h>
using namespace std;

const int MAX = 7.5e7+10;
bool mark[MAX];
vector<int> prime;

void sieve(int N)
{
    long long i,j,limit = sqrt(N*1.0)+2;
    prime.push_back(2);
    for(i=3;(i*i)<=N;i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(j=(i*i);j<=N;j+=i+i)
                    mark[j] = true;
            }
        }

    }
}


int main()
{
    int n;
    const int range = 7.5e7+10;
    sieve(range);
    scanf("%d",&n);
    //printf("%d",prime.size());
    printf("%d\n",prime[n-1]);
    return 0;
}
