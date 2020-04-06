#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,c=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        if(a>79)
            c++;
    }
    printf("%d\n",c);
    return 0;
}
