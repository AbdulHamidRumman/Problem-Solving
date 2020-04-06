#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    scanf("%d",&n);
    if(n%2==0){
        long long odd,even;
        even = n/2;
        odd = (n-even);
        if((abs((odd*odd)-(2*even)))%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    else
    {
        if(abs((n/2)*(n/2)-n)%2==0)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}
