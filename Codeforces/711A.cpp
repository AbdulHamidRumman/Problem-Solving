#include <bits/stdc++.h>
using namespace std;

char seat[1000][5];

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<5;j++)
            scanf(" %c",&seat[i][j]);
    }
    bool yes = false;
    for(i=0;i<n;i++){
        if(seat[i][0]=='O'&&seat[i][1]=='O'){
            seat[i][0]=seat[i][1]='+';
            yes = true;
            break;
        }
        else if(seat[i][3]=='O'&&seat[i][4]=='O'){
            seat[i][3]=seat[i][4]='+';
            yes = true;
            break;
        }
    }
    if(yes){
        printf("YES\n");
        for(i=0;i<n;i++){
            for(j=0;j<5;j++)
                printf("%c",seat[i][j]);
            printf("\n");
        }
    }
    else
        printf("NO\n");
    return 0;

}
