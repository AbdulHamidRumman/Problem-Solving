#include <stdio.h>

int main(){

    unsigned int T,i;
    scanf("%u",&T);
    for(i=1;i<=T;i++){
        int a1, a2, a3;
        unsigned int n;
        scanf("%d %d %d %u",&a1, &a2, &a3, &n);
        if((a2-a1)==(a3-a2))
            printf("Case %d: %d\n",i,(a1+(n-1)*(a2-a1)));
        else
            printf("Case %d: Error\n",i);
    }
    return 0;
}
