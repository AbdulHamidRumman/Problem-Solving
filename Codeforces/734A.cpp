#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5;
char game[MAX];

int main(){
    int n,count_A=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf(" %c",&game[i]);
        if(game[i]=='A')
            count_A++;
    }
    if(count_A<(n-count_A))
        printf("Danik\n");
    else if(count_A>(n-count_A))
        printf("Anton\n");
    else
        printf("Friendship\n");

	return 0;
}
