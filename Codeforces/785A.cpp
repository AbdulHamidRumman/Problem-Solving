#include <bits/stdc++.h>
using namespace std;
int main(){
    long n,side=0;
    char str[13];
    scanf("%ld",&n);
    while(n--){
        scanf("%s",str);
        if(str[0]=='T')
            side = side + 4;
        else if(str[0]=='C')
            side = side + 6;
        else if(str[0]=='O')
            side = side + 8;
        else if(str[0]=='D')
            side = side + 12;
        else
            side = side + 20;
    }
    printf("%ld\n",side);


}
