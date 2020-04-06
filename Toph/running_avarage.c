#include <stdio.h>

int main(){

    int n,i;
    double avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<n;i++)
        arr[i] = arr[i]+arr[i-1];
    for(i=0;i<n;i++)
    {
        avg = arr[i]/(i+1.0);
        printf("%.4lf\n",avg);

    }


    return 0;
}
