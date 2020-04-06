#include <stdio.h>

int main(){

    unsigned int N, sum,M,i;
    scanf("%u",&N);
    sum = (N*(N+1))/2;
    scanf("%u",&M);
    while(M--){
        scanf("%u",&i);
        sum = sum-i;
    }
    printf("%u\n",sum);

    return 0;
}
