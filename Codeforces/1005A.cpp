#include <bits/stdc++.h>
using namespace std;

int s[1000];

int main()
{
    int n,stair=1,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    for(i=1,j=0;i<n;i++)
    {
        if(s[i]==1)
        {
            stair++;
            s[j] = s[i-1];
            j++;
        }
    }
    s[j] = s[n-1];
    printf("%d\n",stair);
    for(int i=0;i<stair;i++)
        printf("%d ",s[i]);
    printf("\n");
	return 0;
}
