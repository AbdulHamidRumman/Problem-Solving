#include <stdio.h>
#include <string.h>

int main(){

    int n;
    scanf("%d",&n);
    while(n--){
        char a[50];
        scanf("%s",a);
        printf("%d\n",strlen(a));
    }

    return 0;
}
