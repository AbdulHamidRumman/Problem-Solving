#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int l1,r1,l2,r2;
        scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
        if(l1==l2&&r1==r2)
            printf("%d %d\n",l1,r2);
        else if(l1==l2)
            printf("%d %d\n",r1-1,r2-1);
        else
            printf("%d %d\n",l1+1,l2+1);
    }
	return 0;
}
