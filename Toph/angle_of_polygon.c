#include <stdio.h>

int main()
{
    int t,n;
    double angle;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        angle = 180-360/(n*1.0);
        printf("%.4lf\n",angle);
    }
    return 0;
}
