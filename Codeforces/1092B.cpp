#include <bits/stdc++.h>
using namespace std;

int student[100];

int main()
{
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&student[i]);
    sort(student,student+n);
    for(int i=1;i<=n;i+=2)
    {
        ans += student[i]-student[i-1];
    }
    printf("%d\n",ans);

	return 0;
}
