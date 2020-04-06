/*
        *** Gaussian Elimination***
idx  0 1 2   3                0 1 2   3

  0  a b c | d            0   1 0 0 | x0
  1  e f g | h      -->   1   0 1 0 | y0
  2  i j k | l            2   0 0 1 | z0

    // Ri = ith row, Rj = jth row

    Step 1 : First row elements are multiplied by reciprocal of the element in (0,0) to yield 1 in (0,0)
    Step 2 : Second and Third Row operation Ri = Ri + Rj * k  to yield 0

    Step 3 : Second row elements are multiplied by reciprocal of the element in (1,1) to yield 1 in (1,1)
    Step 4 : First and Third Row operation Ri = Ri + Rj * k to yield 0

    Step 5 : Third row element are multiplied by reciprocal of the element in (2,2) to yield 1 in (2,2)
    Step 6 : First and Second Row Operation Ri = Ri + Rj * k to yield 0

    // In step 2,4,6 k = -1.0*matrix[i][j]

*/

#include <stdio.h>

double matrix[3][4];
double x,y,z;

void rik(int i, double m) // Performs Ri = Ri * (1/k)
{
    int l;
    for(l=0;l<4;l++)
        matrix[i][l] = matrix[i][l]*(1.0/(m*1.0));
    return;
}

void rijk(int i, int j, double k) // Performs Ri = Ri + Rj * k
{
    int l;
    for(l=0;l<4;l++)
        matrix[i][l] = matrix[i][l]+(matrix[j][l]*k*1.0);
    return;
}

int main()
{
    int i,j;
    // Input of Coefficients of x,y,z and constant
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%lf",&matrix[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        rik(i,matrix[i][i]);
        rijk((i+1)%3,i,-1.0*matrix[(i+1)%3][i]);
        rijk((i+2)%3,i,-1.0*matrix[(i+2)%3][i]);
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%lf ",matrix[i][j]);
        }
        printf("\n");
    }
    x = matrix[0][3];
    y = matrix[1][3];
    z = matrix[2][3];
    printf("\nx = %lf, y = %lf, z=%lf\n",x,y,z);

    return 0;
}
