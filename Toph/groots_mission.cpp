#include <bits/stdc++.h>

int arr[1001];
int main()
{
    int t,n,i,e;
    scanf("%d",&t);
    while(t--)
    {
        e=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        i=1;
        while(1)
        {
            if(i<n)
            {
                e = e+arr[i];
                i = i+arr[i];
            }
            else if(i>n)
            {
                e--;
                i--;
            }
            else
                break;
        }
        printf("%d\n",e);
    }
    return 0;
}
