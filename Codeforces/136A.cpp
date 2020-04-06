#include <bits/stdc++.h>
using namespace std;

int arr[100];

int main(){
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        arr[a%n] = a;
        }
    for(i=0;i<n-1;i++)
        printf("%d ",arr[i]);
    printf("%d\n",arr[n-1]);

    return 0;
}
