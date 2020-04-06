#include <stdio.h>

int main(){

    long int t;
    scanf("%li",&t);
    while(t--){
        long int r;
        double area;
        scanf("%li",&r);
        area = 3.1416*r*r;
        printf("%.3lf\n",area);
    }
    return 0;
}
