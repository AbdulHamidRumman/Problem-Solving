#include <stdio.h>

int main(){

    int n,i,j,space=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=i;j++){
            printf("*");
            if((i>1)&&(space<i)){// printing space between *
                printf(" ");
                space++;
            }
        }
        printf("\n");
        space = 1; // after every line space will be 0 to i-1
    }
    return 0;
}
