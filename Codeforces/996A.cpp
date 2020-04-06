#include<bits/stdc++.h>
using namespace std;


int main(){
    long n,i=0;
    scanf("%ld",&n);
    i = i+(n/100);
    n = n%100;
    i = i+(n/20);
    n = n%20;
    i = i+(n/10);
    n = n%10;
    i = i+(n/5);
    n = n%5;
    i = i+n;
    printf("%ld\n",i);
    return 0;
}
