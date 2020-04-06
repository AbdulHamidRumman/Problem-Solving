#include <stdio.h>

int main(){

    double salary;
    scanf("%lf",&salary);
    if(salary <= 400.00)
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", salary*1.15, salary*0.15);
    else if(salary <= 800.00)
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", salary*1.12, salary*0.12);
    else if(salary <= 1200.00)
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", salary*1.10, salary*0.10);
    else if(salary <= 2000.00)
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", salary*1.07, salary*0.07);
    else
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", salary*1.04, salary*0.04);

    return 0;
}
