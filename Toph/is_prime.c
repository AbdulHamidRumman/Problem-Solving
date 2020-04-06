#include <stdio.h>

int main(){

    int N;
    scanf("%d",&N);
    if(N == 1){
        printf("No\n");
        return 0;
    }
    else if(N == 2){
        printf("Yes\n");
        return 0;
    }
    else{
        for(int i=2;i<=(N/2);i++){
            if((N%i)==0){
                printf("No\n");
                return 0;
            }
        }
        printf("Yes\n");
    }
    return 0;
}
