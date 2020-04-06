#include <bits/stdc++.h>

using namespace std;

int num[5]={5,4,3,2,1};

int main(){
    long n,c=0;
    int i=0;
    scanf("%ld",&n);
    while(n){
        c += (n/num[i]);
        n = n%(num[i]);
        i++;
    }
    printf("%ld\n",c);
    return 0;
}
