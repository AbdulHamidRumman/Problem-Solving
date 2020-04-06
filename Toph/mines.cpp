#include <bits/stdc++.h>
using namespace std;

char cell[11][11];
int main()
{
    int i,j,R,C,c;
    scanf("%d %d",&R,&C);
    R++;
    C++;
    for(i=0;i<R+1;i++)
    {
        for(j=0;j<C+1;j++)
        {
            if(i==0 || i==(R) || j==0 || j==(C))
                cell[i][j]='.';
        }
    }
    for(i=1;i<R;i++)
    {
        for(j=1;j<C;j++)
            scanf(" %c",&cell[i][j]);
    }
    for(i=1;i<R;i++)
    {
        for(j=1;j<C;j++)
        {
            c = 0;
            if(cell[i][j]=='.')
            {
                if(cell[i-1][j-1]=='*')
                    c++;
                if(cell[i-1][j]=='*')
                    c++;
                if(cell[i-1][j+1]=='*')
                    c++;
                if(cell[i][j-1]=='*')
                    c++;
                if(cell[i][j+1]=='*')
                    c++;
                if(cell[i+1][j-1]=='*')
                    c++;
                if(cell[i+1][j]=='*')
                    c++;
                if(cell[i+1][j+1]=='*')
                    c++;
            }
            if(!c || (cell[i][j]=='*'))
                continue;
            cell[i][j] =('0'+c);
        }
    }
    for(i=1;i<R;i++)
    {
        for(j=1;j<C;j++)
            printf("%c",cell[i][j]);
        printf("\n");
    }
    return 0;
}
