#include <bits/stdc++.h>
using namespace std;

int arr[100];
int main()
{
    int n,a,b,sum=0;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(;a<=b;a++)
        sum = sum + arr[a];
    printf("%d\n",sum);

    return 0;
}
