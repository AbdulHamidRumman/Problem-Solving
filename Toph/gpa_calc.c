#include <stdio.h>

int main(){

    int T;
    scanf("%d",&T);
    for(int j = 1; j <= T; j++){
        int N,i;
        float a;
        scanf("%d",&N);
        scanf("%f",&a);
        for(i = 1;i<N;i++){
            float b;
            scanf("%f",&b);
            a = a+b;
        }
        printf("Case %d: %.3f\n",j,(a/N));
    }

    return 0;
}
