#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int burle[100];

int main()
{
    int n,i;
    ll s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&burle[i]);
    sort(burle,burle+n);
    int mx = burle[n-1];
    for(i=0;i<n-1;i++)
        s += abs(mx-burle[i]);
    printf("%lld\n",s);

	return 0;
}
