#include <stdio.h>

int main(){

    int N;
    unsigned long long int t1=1,t2=1,t;
    scanf("%d",&N);
    if((N==1)||(N==2))
        printf("1\n");
    else{
        N = N-2;
        while(N--){
            t = t1+t2;
            t1 = t2;
            t2 = t;
        }
        printf("%llu\n",t);
    }
    return 0;
}
