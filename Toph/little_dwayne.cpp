#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,d,k,x,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&d,&k);
        c=0;
        while(d--)
        {
            scanf("%d",&x);
            if(x>k)
                c +=(x-k);
        }
        printf("%d\n",c);
    }
    return 0;
}
