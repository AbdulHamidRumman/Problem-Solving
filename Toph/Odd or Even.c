#include <stdio.h>

int main(){

    long long N;
    scanf("%ld",&N);
    if(N%2==0)
        printf("%ld\n",N/2);
    else
        printf("%ld\n",(N+1)/2);

    return 0;
}
