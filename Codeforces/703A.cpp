#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int m,c,mishka=0,chris=0;
    while(n--){
        scanf("%d %d",&m,&c);
        if(m>c)
            mishka++;
        else if (c>m)
            chris++;
    }
    if(mishka>chris)
        printf("Mishka\n");
    else if(mishka<chris)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");

	return 0;
}
