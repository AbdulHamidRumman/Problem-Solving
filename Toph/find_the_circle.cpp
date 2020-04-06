#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x1,y1,x2,y2,r;
    double X,Y,x3,y3,R,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&r);
        x3 = (x1+x2)/2.0;
        y3 = (y1+y2)/2.0;
        X = (x1-x2)*(x1-x2);
        Y = (y1-y2)*(y1-y2);
        d = sqrt(X+Y);
        R = (d/2.0)+r;
        printf("%.2lf %.2lf %.2lf\n",x3,y3,R);
    }
    return 0;
}
