#include <stdio.h>
#include <math.h>

long double pi = acos(-1.0);
int main()
{
    /*int t;
    float a,b,alpha;
    float ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f%f",&a,&b,&alpha);
        alpha = (alpha*pi)/180.0;
        ans = 2*(b*b+(a*a+b*b-2*a*b*cos(alpha)));
        printf("%f\n",ans);
    }*/
    printf("%Lf\n",pi);
    return 0;
}
