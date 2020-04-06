#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        ll a,b,k,point;
        scanf("%lld %lld %lld",&a,&b,&k);
        point = (a-b)*(k/2);
        if(k%2==0)
            printf("%lld\n",point);
        else
            printf("%lld\n",point+a);
    }
	return 0;
}
