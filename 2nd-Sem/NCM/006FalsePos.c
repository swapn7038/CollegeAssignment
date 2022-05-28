// False-position or regula false ✔✔✔
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return cos(x) - x*exp(x);
}
void regula (float *x, float x0, float x1, float fx0, float fx1, int *itr)
{
    *x = x0 - ((x1 - x0) / (fx1 - fx0))*fx0;
    ++(*itr);
    printf("Iteration no. %3d X = %7.5f \n", *itr, *x);
}
void main ()
{
    int itr = 0, maxmitr;
    float x0,x1,x2,x3,allerr;
    printf("\nEnter the values of x0, x1, allowed error and maximum iterations:\n");
    scanf("%f %f %f %d", &x0, &x1, &allerr, &maxmitr);
    regula (&x2, x0, x1, f(x0), f(x1), &itr);
    do
    {
        if (f(x0)*f(x2) < 0)
            x1=x2;
        else
            x0=x2;
        regula (&x3, x0, x1, f(x0), f(x1), &itr);
        if (fabs(x3-x2) < allerr)
        {
            printf("After %d iterations, root = %6.4f\n", itr, x3);
            return 0;
        }
        x2=x3;
    }
    while (itr<maxmitr);
    printf("Solution does not converge or iterations not sufficient:\n");
    return 1;
}


// Output
// Enter the values of x0, x1, allowed error and maximum iterations:
// 0
// 1
// 0.0005
// 20
// Iteration no.   1 X = 0.31467 
// Iteration no.   2 X = 0.44673
// Iteration no.   3 X = 0.49402
// Iteration no.   4 X = 0.50995
// Iteration no.   5 X = 0.51520
// Iteration no.   6 X = 0.51692
// Iteration no.   7 X = 0.51748
// Iteration no.   8 X = 0.51767
// After 8 iterations, root = 0.5177











// short note
/* closed bracket method
 
need initial two guess values
 convergence-linear
 itr-counter keeps track of the no. of iteration performed
 maxmitr-maximun number of iteration to be performed
 x0,x1- limits within which the root lies
 x2- value o froot at nth iteration
 x3- value of root at (n+1)th iteration
 aller-allowed error
 x- value of root at nth iteration in the regula falsi
 f(x0),f(x1)- the values of f(x) at x0 and x1 respectively
*/