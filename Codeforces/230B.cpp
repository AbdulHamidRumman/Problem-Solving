#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ll x;
        scanf("%lld",&x);
        if(x == 1){
            printf("NO\n");
            continue;
        }
        ll root = sqrt(x);
        if(root*root!=x){
            printf("NO\n");
            continue;
        }
        bool isprime = true;
        for(ll j=2;(j*j)<=root;j++){
            if(root%j==0){
                printf("NO\n");
                isprime=false;
                break;
            }
        }
        if(isprime)
            printf("YES\n");
    }
    return 0;
}
