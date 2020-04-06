#include <bits/stdc++.h>
using namespace std;

int arr[1000];

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            arr[i]--;
    }
    for(i=0;i<n-1;i++)
        printf("%d ",arr[i]);
    printf("%d\n",arr[n-1]);

	return 0;
}
