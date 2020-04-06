#include <stdio.h>

int main(){

    double n1, n2, n3, n4, avg;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    avg = ((2.0*n1)+(3.0*n2)+(4.0*n3)+(n4))/10.0;
    printf("Media: %.1lf\n",avg);
    if(avg >= 7.0)
        printf("Aluno aprovado.\n");
    else if(avg < 5.0)
        printf("Aluno reprovado.\n");
    else{
        double t, new_avg;
        printf("Aluno em exame.\n");
        scanf("%lf",&t);
        printf("Nota do exame: %.1lf\n",t);
        new_avg = (avg+t)/2.0;
        if(new_avg >= 5.0)
            printf("Aluno aprovado.\n");
        else if(new_avg <= 4.9)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",new_avg);
    }
    return 0;
}
