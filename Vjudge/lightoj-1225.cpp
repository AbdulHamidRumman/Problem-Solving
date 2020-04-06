#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        long num,rev_num=0,temp;
        scanf("%ld",&num);
        temp = num;
        while(temp!=0){
            rev_num = rev_num*10+(temp%10);
            temp = temp/10;
        }
        if(num==rev_num)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
