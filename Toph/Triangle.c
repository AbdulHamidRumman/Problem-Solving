#include <stdio.h>
#include <math.h>

int main(){

    int n,a,b,c;
    double s;
    double area;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&a,&b,&c);
        if((a+b>=c)&&(b+c>=a)&&(c+a>=b)){
            s = (a+b+c)/2.0;
            area = sqrt((s*(s-a)*(s-b)*(s-c)));
            printf("%.2lf\n",area);
        }
        else
            printf("Oh, No!\n");
    }

    return 0;
}
