#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){
        n = n/2;
        printf("%d\n",n);
        n = n-1;
        while(n--)
            printf("2 ");
        printf("2\n");
    }
    else{
        n = (n-3)/2;
        printf("%d\n",n+1);
        while(n--)
            printf("2 ");
        printf("3\n");
    }
	return 0;
}
