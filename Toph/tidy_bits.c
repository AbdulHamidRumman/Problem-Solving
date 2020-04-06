#include <stdio.h>

int main(){
    long int a,num=0,i=1;
    scanf("%li",&a);
    while(a!=0){
        if((a%2)==1){
            num = num+i;
            i = i*2;
        }
        a = a/2;
    }
    printf("%li\n",num);
    return 0;
}
