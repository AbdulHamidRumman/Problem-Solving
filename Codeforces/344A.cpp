#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+1;
char mag[MAX+MAX];

int main(){
    int n,c=0,i;
    scanf("%d",&n);
    n = n+n;
    for(i=0;i<n;i+=2)
        scanf(" %c%c",&mag[i],&mag[i+1]);
    for(i=0;i<n;i+=2){
        if(mag[i]!=mag[i+2])
            c++;
    }
    printf("%d\n",c);//not c+1 because for length 6 the last comparison mag[5]!=mag[7] is always true because mag[7] is a garbage value

	return 0;
}
