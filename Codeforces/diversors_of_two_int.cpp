//Wrong answer

#include <bits/stdc++.h>
using namespace std;

int d[128];

int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
    sort(d,d+n);
    x = d[n-1];
    for(i=n-2;i>0;i--)
    {
        if((x%d[i])!=0)
        {
            y = d[i];
            break;
        }
    }
    printf("%d %d\n",x,y);
	return 0;
}
