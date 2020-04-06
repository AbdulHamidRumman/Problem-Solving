#include <stdio.h>

int main(){
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        double r,area;
        scanf("%lf",&r);
        area = (8*r*r)-(2*3.1416*r*r);
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}



