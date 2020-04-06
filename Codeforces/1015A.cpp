#include <bits/stdc++.h>
using namespace std;

vector<bool> ox(100,true); // vector creates dynamic array(size,default_value)

int main()
{
    int n,c=0,m;
    scanf("%d %d",&n,&m);
    while(n--)
    {
        int li,ri;
        scanf("%d %d",&li,&ri);
        while(li<=ri){
            if(ox[li])
                c++;
            ox[li] = false;
            li++;
        }
    }
    printf("%d\n",m-c);
    for(int i=1;i<=m;i++)
    {
        if(ox[i])
            printf("%d ",i);
    }
    printf("\n");
	return 0;
}
