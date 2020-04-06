#include <stdio.h>

int main(){

    int H,M;
    double a1,a2;
    scanf("%d %d",&H,&M);
    a1 = (H*30.0)+(M/2.0);
    a2 = M*6.0;
    if(a1 > a2)
        printf("%.7lf\n",((a1-a2)<(360-(a1-a2)))? (a1-a2):(360-(a1-a2)));
    else
        printf("%.7lf\n",((a2-a1)<(360-(a2-a1)))? (a2-a1):(360-(a2-a1)));

    return 0;
}
