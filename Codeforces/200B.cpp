#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float a,sum=0.0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%f",&a);
        sum += a;
    }
    printf("%f\n",(sum/n));

	return 0;
}
