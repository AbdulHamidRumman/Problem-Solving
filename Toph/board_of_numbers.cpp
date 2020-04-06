#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    long long mx=0,prod;
    prod = a*b;
    if(prod>mx)
        mx = prod;
    prod = a*c;
    if(prod>mx)
        mx = prod;
    prod = a*d;
    if(prod>mx)
        mx = prod;
    prod = b*c;
    if(prod>mx)
        mx = prod;
    prod = b*d;
    if(prod>mx)
        mx = prod;
    prod = c*d;
    if(prod>mx)
        mx = prod;
    printf("%lld\n",mx);
    return 0;
}
