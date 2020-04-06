#include <stdio.h>

int main(){

    double N;
    scanf("%lf",&N);
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n",(long int)(N/100.00));
    N = N - (100.00*(long int)(N/100.00));
    printf("%d nota(s) de R$ 50.00\n",(long int)(N/50.00));
    N = N - (50.00*(long int)(N/50.00));
    printf("%d nota(s) de R$ 20.00\n",(long int)(N/20.00));
    N = N - (20.00*(long int)(N/20.00));
    printf("%d nota(s) de R$ 10.00\n",(long int)(N/10.00));
    N = N - (10.00*(long int)(N/10.00));
    printf("%d nota(s) de R$ 5.00\n",(long int)(N/5.00));
    N = N - (5.00*(long int)(N/5.00));
    printf("%d nota(s) de R$ 2.00\n",(long int)(N/2.00));
    N = N - (2.00*(long int)(N/2.00));
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",(long int)(N/1.00));
    N = N - (1.00*(long int)(N/1.00));
    printf("%d moeda(s) de R$ 0.50\n",(long int)(N/0.50));
    N = N - (0.50*(long int)(N/0.50));
    printf("%d moeda(s) de R$ 0.25\n",(long int)(N/0.25));
    N = N - (0.25*(long int)(N/0.25));
    printf("%d moeda(s) de R$ 0.10\n",(long int)(N/0.10));
    N = N - (0.10*(long int)(N/0.10));
    printf("%d moeda(s) de R$ 0.05\n",(long int)(N/0.05));
    N = N - (0.05*(long int)(N/0.05));
    printf("%d moeda(s) de R$ 0.01\n",(long int)(N/0.01));

    return 0;
}
/*int main(){

    double N;
    scanf("%lf",&N);
    double note[] = {100.00,50.00,20.00,10.00,5.00,2.00,1.00,0.50,0.25,0.10,0.05,0.01};
    printf("NOTAS:\n");
    for(int i = 0; i < 12; i++){
        if(i == 6)
            printf("MOEDAS:\n");
        printf("%d nota(s) de R$ %.2lf\n",(int)(N/note[i]),note[i]);
        N = N - (note[i] * (int)(N/note[i]));
    }
    return 0;
}
*/
