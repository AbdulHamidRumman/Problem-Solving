#include <bits/stdc++.h>
using namespace std;

char str[100];

int main()
{
    int n,i,x_count=0,r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf(" %c",&str[i]);
    for(i=0;i<n;i++)
    {
        if(str[i]=='x')
        {
            x_count++;
            if(x_count>2)
                r++;
        }
        else
            x_count = 0;
    }
    printf("%d\n",r);

	return 0;
}
