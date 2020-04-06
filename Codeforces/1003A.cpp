#include <bits/stdc++.h>
using namespace std;

int arr[100];

int main()
{
    int n,i,ans=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        arr[i] = 0;
    for(i=0;i<n;i++){
        scanf("%d",&j);
        arr[j-1]++;
        ans = (ans<arr[j-1])? arr[j-1]:ans;
    }
    printf("%d\n",ans);
	return 0;
}
