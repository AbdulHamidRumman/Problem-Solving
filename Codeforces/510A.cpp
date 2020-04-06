#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    char snake[n][m];

    for(i=0;i<n;i++)
    {
        if(!(i%2))
        {
            for(j=0;j<m;j++)
                snake[i][j]='#';
        }
        else
        {
            for(j=0;j<m;j++)
                snake[i][j]='.';
        }
    }
    for(i=1,j=3;(i<n)||(j<n);i+=4,j+=4)
    {
        snake[i][m-1]='#';
        snake[j][0]='#';
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%c",snake[i][j]);
        printf("\n");
    }

    return 0;
}
