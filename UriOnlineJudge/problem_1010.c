#include <stdio.h>

int main(){

    int p1_code, p2_code, p1_unit, p2_unit;
    double p1_price, p2_price;
    scanf("%d %d %lf",&p1_code, &p1_unit, &p1_price);
    scanf("%d %d %lf",&p2_code, &p2_unit, &p2_price);
    printf("VALOR A PAGAR: R$ %.2lf\n",(p1_unit * p1_price + p2_unit * p2_price));

    return 0;
}
