#include <stdio.h>

int main(){
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        int a,b;
        char c;
        scanf("%d %c %d",&a,&c,&b);
        if(c =='+')
            printf("Case %d: %d\n",i,a+b);
        else if(c == '-')
            printf("Case %d: %d\n",i,a-b);
        else
            printf("Case %d: %d\n",i,a*b);
    }
    return 0;
}
