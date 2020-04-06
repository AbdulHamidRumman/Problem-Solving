#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;n!=0;n--)
    {
        i = i*n;
        i = i%10000;
    }
    printf("%d\n",i);

    return 0;
}
