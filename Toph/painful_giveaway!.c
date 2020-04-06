#include <stdio.h>

int main(){

    long int N,i;
    scanf("%li",&N);
    if(N == 0)
        printf("0");
    else if(N > 0){
        printf("0");
        for(i = 1;i<=N;i++)
            printf(" %li",i);
    }
    else{
        printf("%li",N);
        for(i = N+1; i <= 0; i++)
            printf(" %li",i);
    }
    printf("\n");

    return 0;
}
