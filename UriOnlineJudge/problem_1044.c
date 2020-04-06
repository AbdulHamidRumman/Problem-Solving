#include <stdio.h>

int main(){

    int A, B, t;
    scanf("%d %d",&A, &B);
    if(A > B){
        t = A;
        A = B;
        B = t;
    }
    if(B % A == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");


    return 0;
}
