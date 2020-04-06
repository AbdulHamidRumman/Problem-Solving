#include <stdio.h>

int main(){

    long unsigned int N,i,f=0;
    scanf("%lu",&N);
    for(i=1;i<=N/2;i++){
        if((N%i)==0)
            f++;
    }
    printf("%lu\n",f);

    return 0;
}
