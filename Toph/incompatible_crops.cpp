#include <bits/stdc++.h>
using namespace std;

char crop[25][25];

int main()
{
    int i,j,R,C,c=0;
    scanf("%d %d",&R,&C);
    R++;
    C++;
    for(i=0;i<R+1;i++)
    {
        for(j=0;j<C+1;j++)
        {
            if(i==0 || i==(R) || j==0 || j==(C))
                crop[i][j]='.';
        }
    }
    for(i=1;i<R;i++)
    {
        for(j=1;j<C;j++)
            scanf(" %c",&crop[i][j]);
    }
    for(i=1;i<R;i++)
    {
        for(j=1;j<C;j++)
        {
                if(crop[i][j]=='.' && crop[i-1][j]=='.' && crop[i+1][j]=='.' && crop[i][j-1]=='.' && crop[i][j+1]=='.')
                    c++;
        }
    }
    printf("%d\n",c);
}
