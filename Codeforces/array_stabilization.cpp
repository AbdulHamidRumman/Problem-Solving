#include <bits/stdc++.h>
using namespace std;
const long MAX = 1e5;
long arr[MAX];
int main(){
    long n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
    sort(arr,arr+n);
    if(n==2){
        printf("0\n");
        return 0;
    }
    printf("%ld\n",(arr[i+1]-arr[0]));
    return 0;
}
