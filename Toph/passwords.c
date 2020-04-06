#include <stdio.h>

int main(){
    //freopen("password_in.txt","r",stdin);
    //freopen("password_out.txt","w",stdout);
    char str[101];
    while(scanf("%s",str)!=EOF){
        int i,len,up=0,low=0,digit=0,pass=0;
        for(len=0;str[len]!='\0';len++);
        for(i=0;i<len;i++){
            if(str[i]>='A' && str[i]<='Z'){
                if(up == 0)
                    up = 1;
            }
            else if(str[i]>='a' && str[i]<='z'){
                if(low == 0)
                    low = 1;
            }
            else{
                if(digit == 0)
                    digit = 1;
            }
            if(up==1&&low==1&&digit==1){
                pass++;
                up = low = digit = 0;
            }
        }
        printf("%d\n",pass);
    }
    return 0;
}
