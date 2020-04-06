#include <bits/stdc++.h>
using namespace std;
char day[100];
int main(){
    int n,i,s=0,f=0;
    scanf("%d",&n);
    scanf("%s",day);
    for(i=0;i<n-1;i++){
        if(day[i]!=day[i+1]){
            if(day[i]=='S'&&day[i+1]=='F')
                f++;
            else
                s++;
        }
    }
    if(s<f)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
