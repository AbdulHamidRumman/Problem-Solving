#include <bits/stdc++.h>
using namespace std;

int table[10][10];

void generate_table(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0||j==0)
                table[i][j]=1;
            else
                table[i][j] = table[i-1][j]+table[i][j-1];
        }
    }
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    generate_table(n);
    printf("%d\n",table[n-1][n-1]);
	return 0;
}
