#include <stdio.h>

int main()
{
    double sal, tax=0,d=0;
    scanf("%lf",&sal);
    if(sal>4500.00)
    {
        d = sal-4500.00;
        tax += d*0.28;
        sal = sal-d;
        d = sal-3000.00;
        tax += d*0.18;
        sal = sal-d;
        d = sal-2000.00;
        tax += d*0.08;
    }
    else if(sal>3000.00)
    {
        d = sal-3000.00;
        tax += d*0.18;
        sal = sal-d;
        d = sal-2000.00;
        tax += d*0.08;
    }
    else if(sal>2000.00)
    {
        d = sal-2000.00;
        tax += d*0.08;
    }
    else
    {
        printf("Isento\n");
        return 0;
    }
    printf("R$ %.2lf\n",tax);

    return 0;
}
