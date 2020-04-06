#include <stdio.h>

int main() {
	int t;
	long long m,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		m = a*b;
		printf("%lld\n",m);
	}
	return 0;
}
