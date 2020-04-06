#include <stdio.h>

int main(){

    long int n,m,result,temp;
    while(scanf("%li %li", &n, &m) != EOF){
        result = 0;
        if(n > m){
            temp = m;
            m = n;
            n = temp;
        }
        result = (m *(m+1)/2) - ((n-1)*n/2);
        printf("Sum of %li to %li is -> %li;\n",n,m,result);
    }
    return 0;
}
