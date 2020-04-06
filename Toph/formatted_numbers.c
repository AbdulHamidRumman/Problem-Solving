#include <stdio.h>

int main(){

    long int A,k1,k2;
    scanf("%li",&A);
    k1 = (A%1000);
    A = A/1000;
    k2 = (A%1000);
    A = A/1000;
    if(A<0){
        k1 = (-1*k1);
        k2 = (-1*k2);
    }
    if(k2==0)
        printf("%li\n",k1);
    else{
        if(A!=0)
            printf("%li,%li,%li\n",A,k2,k1);
        else
            printf("%li,%li\n",k2,k1);
    }
    return 0;
}
