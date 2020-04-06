#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, t;
    scanf("%d %d %d",&a,&b,&c);
    t = (b+c+abs(b-c))/2;
    printf("%d eh o maior\n",(a+t+abs(a-t))/2);

    return 0;
}


