#include <bits/stdc++.h>
using namespace std;

const int SIZE = 2e8+1;

char num[SIZE];
typedef long long ll;

int main()
{
    ll s,r,i,j=0;
    bool flag = false;
    scanf("%s",num);
    for(s=0;num[s]!='\0';s++);
    r = s%3;
    if(s<4)
        printf("%s",num);
    else
    {
        if(!r)
        {
            for(i=0;i<s-5;i+=3)
                printf("%c%c%c,",num[i],num[i+1],num[i+2]);
        }
        else if(r==1)
        {
            printf("%c,",num[0]);
            for(i=1;i<s-5;i+=3)
                printf("%c%c%c,",num[i],num[i+1],num[i+2]);
        }
        else if(r==2)
        {
            printf("%c%c,",num[0],num[1]);
            for(i=2;i<s-5;i+=3)
                printf("%c%c%c,",num[i],num[i+1],num[i+2]);
        }
        printf("%c%c%c",num[s-3],num[s-2],num[s-1]);
    }

    printf("\n");

    return 0;
}
