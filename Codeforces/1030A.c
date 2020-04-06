#include <stdio.h>

int main(){
    int n,k;
    char t;
    scanf("%d",&n);
    do{
        scanf("%d%c",&k,&t);
        if(k == 1){
            printf("HARD\n");
            return 0;
        }
    }while(t!='\n');
    printf("EASY");
    return 0;
}
