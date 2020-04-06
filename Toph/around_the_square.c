#include <stdio.h>
#include <math.h>

int main(){
    int a,r1,r2,r3,r4;
    while(scanf("%d %d %d %d %d",&a,&r1,&r2,&r3,&r4)!=EOF){
        double area;
        area = (a*a)- (acos(-1)*(r1*r1+r2*r2+r3*r3+r4*r4))/4.0;
        printf("%.3lf\n",area);
    }
    return 0;
}
