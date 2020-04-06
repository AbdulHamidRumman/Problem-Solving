#include <bits/stdc++.h>

using namespace std;

const int MAX = 3e5+5;
char arr[MAX];
int main(){
    int n,zero=0,one=0,two=0,i;
    scanf("%d",&n);
    scanf("%s",arr);
    for(i=0;i<n;i++){
        if(arr[i]=='0')
            zero++;
        else if(arr[i]=='1')
            one++;
        else
            two++;
    }
    int t = n/3;

    return 0;
}
