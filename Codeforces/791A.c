#include <stdio.h>

int main(){
    int L,B,i;
    scanf("%d %d",&L,&B);
    for(i=0;L<=B;i++){
        L = 3*L;
        B = 2*B;
    }
    printf("%d\n",i);
}
