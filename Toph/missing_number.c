#include <stdio.h>

int main(){

    unsigned int sum, a, b, c;
    scanf("%u",&sum);
    scanf("%u %u %u",&a, &b, &c);
    printf("%u\n",(sum-(a+b+c)));

    return 0;
}
