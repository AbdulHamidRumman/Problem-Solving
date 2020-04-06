#include <stdio.h>

int main()
{
    int n,m,a,s=0;
    scanf("%d%d",&n,&m);
    while(n--)
    {
        scanf("%d",&a);
        s += a;
    }
    if(!(s%m))
        printf("%d\n",(s/m));
    else
        printf("%d\n",(s/m)+1);

    return 0;
}
