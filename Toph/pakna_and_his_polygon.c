#include <stdio.h>

int main(){
    int t,n;
    double area;
    scanf("%u",&t);
    while(t--)
    {
        scanf("%d",&n);
        area = (3*1.73205*n*n)/2.0;
        printf("%.4lf\n",area);
    }

    return 0;
}
