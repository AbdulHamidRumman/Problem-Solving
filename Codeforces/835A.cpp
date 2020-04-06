#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,v1,v2,t1,t2,ans1,ans2;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
    ans1 = (2*t1)+(v1*s);
    ans2 = (2*t2)+(v2*s);
    if(ans1==ans2)
        printf("Friendship\n");
    else if(ans1<ans2)
        printf("First\n");
    else
        printf("Second\n");

	return 0;
}
