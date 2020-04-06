#include <bits/stdc++.h>
using namespace std;

char str[101];

int main()
{
    int n,k=0,i;
    scanf("%d",&n);
    scanf("%s",str);
    for(i=1;i<=n;i++){
        if((str[i]=='W'||str[i]=='\0')&&str[i-1]=='B')
            k++;
    }
    printf("%d\n",k);
    int black = 0;
    for(i=0;i<=n;i++){
        if(str[i]=='B')
            black++;
        else if(str[i]=='W'||str[i]=='\0'){
            if(black)
                printf("%d ",black);
            black = 0;
        }
    }
	return 0;
}
