#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=(n/2);i++){
        if((n-i)%i==0)
            c++;
    }
    printf("%d\n",c);
    return 0;
}
