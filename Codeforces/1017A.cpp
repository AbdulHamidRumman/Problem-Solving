#include <bits/stdc++.h>
using namespace std;

int score[1000];

int main()
{
    int n,i,thomas;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        score[i] = (a+b+c+d);
        if(i==0)
            thomas = score[i];
    }
    sort(score,score+n,greater<int>()); // sort(score,score+n,greater<int>()) sorts array in decreasing order
    for(i=0;i<=n;i++)
    {
        if(score[i]==thomas)
        {
            printf("%d\n",++i);
            break;
        }
    }
	return 0;
}
