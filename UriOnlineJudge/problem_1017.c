#include <stdio.h>

int main(){

    int t, v;
    double fuel;
    scanf("%d",&t);
    scanf("%d",&v);
    fuel =  v * t/12.0;
    printf("%.3lf\n",fuel);

    return 0;
}
