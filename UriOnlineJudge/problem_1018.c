#include <stdio.h>

int main(){

    long int num;
    int a,b,c,d,e,f,g;
    scanf("%d",&num);
    printf("%d\n",num);
    a = num/100;
    num = num%100;
    b = num/50;
    num = num%50;
    c = num/20;
    num = num%20;
    d = num/10;
    num = num%10;
    e = num/5;
    num = num%5;
    f = num/2;
    num = num%2;
    g = num/1;
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,b,c,d,e,f,g);

    return 0;
}
