#include <bits/stdc++.h>
using namespace std;

char tom1[10],tom2[10],john1[10],john2[10];
int main()
{
    int t,w,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%s%s%s",tom1,tom2,john1,john2);
        w = strcmp(tom1,john1);
        x = strcmp(tom1,john2);
        y = strcmp(tom2,john1);
        z = strcmp(tom2,john2);
        if(!w || !x || !y || !z)
            printf("Possible\n");
        else
            printf("Oh no!, such a shame\n");
    }
    return 0;
}
