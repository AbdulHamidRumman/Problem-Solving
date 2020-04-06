#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    scanf("%d",&year);
    if(!(year%400) || (!(year%4) && (year%100)))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
