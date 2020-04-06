#include <bits/stdc++.h>
using namespace std;

char st1[11];

int main(){
    int len;
    scanf("%d",&len);
    scanf("%s",st1);
    int i,j;
    for(i=0,j=1;i<len;i=i+j,j++){
        printf("%c",st1[i]);
    }
    printf("\n");

    return 0;
}
