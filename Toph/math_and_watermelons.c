#include <stdio.h>

int main(){

    unsigned long int M;
    unsigned int K;
    scanf("%lu %u",&M,&K);
    printf("%lu\n",(M%K));

    return 0;
}
