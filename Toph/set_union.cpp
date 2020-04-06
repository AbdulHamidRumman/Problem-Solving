#include <bits/stdc++.h>
using namespace std;

int uni_set[200];

int main()
{
    int s1,s2,total_s,i,j;
    scanf("%d %d",&s1,&s2);
    total_s = s1+s2;
    for(i=0;i<total_s;i++)
        scanf("%d",&uni_set[i]);
    sort(uni_set,uni_set+total_s);
    for(i=0;i<total_s;i++)
    {
        if(uni_set[i]==uni_set[i+1])
        {
            for(j=i+1;j<total_s;j++)
                uni_set[j-1] = uni_set[j];
            total_s--;
            i=0;
        }
    }
    for(i=0;i<total_s;i++)
        printf("%d ",uni_set[i]);
    printf("%d\n",uni_set[total_s]);

    return 0;
}
