#include <stdio.h>

int main(){
    char str[1000];
    int v=0,len;
    scanf("%s",str);
    for(len=0;str[len]!='\0';len++);
    while(len--){
        if(str[len]=='A'||str[len]=='a'||str[len]=='E'||str[len]=='e'||str[len]=='I'||str[len]=='i'||str[len]=='O'||str[len]=='o'||str[len]=='U'||str[len]=='u')
            v++;
    }
    printf("%d\n",v);
    return 0;
}
