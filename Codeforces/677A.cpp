#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h,w=0,input;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++){
        scanf("%d",&input);
        if(input>h)
            w += 2;
        else
            w++;
    }
    printf("%d\n",w);

	return 0;
}
