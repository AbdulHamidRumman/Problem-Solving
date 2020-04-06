#include <bits/stdc++.h>
using namespace std;

char pr[13]={'[','.','.','.','.','.','.','.','.','.','.',']','\0'};
int main()
{
    int p,i,d;
    scanf("%d",&p);
    d = p/10;
    for(i=1;i<=d;i++)
        pr[i] = '+';
    printf("%s %d%\n",pr,p);

    return 0;
}
