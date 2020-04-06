#include <stdio.h>

int main(){

    int N,max=0,b;
    scanf("%d",&N);
    char t;
    while(N--){
        scanf("%d%c",&b,&t);
        if(max < b)
            max = b;
    }
    printf("%d\n",max);

    return 0;
}
