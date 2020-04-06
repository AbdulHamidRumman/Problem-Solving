#include <stdio.h>

int main(){

    char a[100],b[100],t;
    int i,j,a_len=0,b_len=0;
    scanf("%s\n%s",a,b);
    for(;a[a_len]!='\0';a_len++);
    for(;b[b_len]!='\0';b_len++);
    if(a_len!=b_len){
        printf("No\n");
        return 0;
    }
    else{
        for(i=0;i<a_len-1;i++){
            for(j=0;j<a_len;j++){
                if(a[j]>a[j+1]){
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                }
                if(b[j]>b[j+1]){
                    t = b[j];
                    b[j] = b[j+1];
                    b[j+1] = t;
                }
            }
        }
        for(i=0;i<a_len;i++){
            if(a[i]!=b[i]){
                printf("No\n");
                return 0;
            }
        }
        printf("Yes\n");
    }
    return 0;
}
