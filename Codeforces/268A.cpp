#include <bits/stdc++.h>

using namespace std;

int arr[30][2];

int main()
{
    int i,j,c=0,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d %d",&arr[i][0],&arr[i][1]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(arr[i][0]==arr[j][1])
                c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
