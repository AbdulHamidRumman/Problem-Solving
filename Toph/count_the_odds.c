#include <stdio.h>

int main(){

    unsigned int A, B;
    scanf("%u %u",&A, &B);
    if(A%2==0)
        A++;
    if(B%2==0)
        B--;
    printf("%u\n",((B-A)/2)+1);

    return 0;
}
