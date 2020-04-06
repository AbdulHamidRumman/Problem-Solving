#include <bits/stdc++.h>
using namespace std;

char mes[101];
int main()
{
    int n,x,i;
    scanf("%d\n",&n);
    gets(mes);
    for(i=0;mes[i]!='\0';i++)
    {
        if(mes[i]==' ')
            continue;
        x = (mes[i]-'a')-2;
        if(x<0)
            x = (x+123)%97;
        mes[i] = 'a'+x;
    }
    printf("%s\n",mes);
    return 0;
}
