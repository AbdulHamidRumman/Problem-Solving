#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C, d;
    scanf("%lf %lf %lf", &A, &B, &C);
    d = (B*B) - (4.0*A*C);
    if((A!=0) && (d >= 0))
        printf("R1 = %.5lf\nR2 = %.5lf\n",((-B+sqrt(d))/(A+A)),((-B-sqrt(d))/(A+A)));
    else
        printf("Impossivel calcular\n");

    return 0;
}
