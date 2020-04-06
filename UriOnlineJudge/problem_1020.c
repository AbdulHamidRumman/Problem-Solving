#include <stdio.h>

int main(){

    int num, a, b, c;
    scanf("%d",&num);
    a = num / 365;
    num = num % 365;
    b = num / 30;
    c = num % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,b,c);

    return 0;
}
