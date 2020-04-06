#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C;
    scanf("%d%d",&A,&B);
    if(B>A)
    {
        int t;
        t = B;
        B = A;
        A = t;
    }
    C = (A+B)-(A-B)-1;
    printf("%d\n",C);
    return 0;
}
