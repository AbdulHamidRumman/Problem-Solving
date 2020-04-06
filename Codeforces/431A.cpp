#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;
char str[MAX];

int main()
{
    int a1,a2,a3,a4,cal=0,i;
    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
    scanf("%s",str);
    int len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='1')
            cal += a1;
        else if(str[i]=='2')
            cal += a2;
        else if(str[i]=='3')
            cal += a3;
        else
            cal += a4;
    }
    printf("%d\n",cal);

	return 0;
}
