#include <stdio.h>

int main(){

    char a[100];
    int len=0,i;
    scanf("%s",a);
    while(a[len]!='\0')
        len++;
    for(i=0;i<=(len/2);i++){
        if(a[i]!=a[len-(i+1)]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
