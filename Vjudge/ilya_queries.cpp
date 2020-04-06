#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+10;
char str[MAX];
int arr[MAX];

int main(){
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==str[i+1])
            arr[i]=1;
        else
            arr[i]=0;
    }
    for(int i=1;i<len;i++)
        arr[i] = arr[i]+arr[i-1];

    int q;
    scanf("%d",&q);
    while(q--){
        int a,b;
        scanf("%d %d",&a,&b);
        a--;
        b--;
        if(a==0)
            printf("%d\n",arr[b-1]);
        else
            printf("%d\n",(arr[b-1]-arr[a-1]));
    }
    return 0;
}
