/* Program Newton-Raphson
   Program to find a root of the equation x*x*x - 3x + 1 =0 by
   Newton-Raphson method. f(x) and its derivative fd(x) are to
   be supplies.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	int k=0; //counts number of iterations
	float x1,x0; //x0 is the initial guess
	float eps=1e-5; //error tolerance
	float f(float x);
	float fd(float x);
	printf("\nEnter the initial guess x0 : ");
	scanf("%f",&x0);
	x1=x0;
	do
	{
		k++;
		x0=x1;
		x1=x0-f(x0)/fd(x0);
	}while(fabs(x1-x0)>eps);
	printf("One root is %8.5f obtained at %dth iteration",x1,k);
}

//definition of the function f(x)
float f(float x)
{
	return(x*x*x-3*x+1);
}

//definition of the function fd(x)
float fd(float x)
{
	return(3*x*x-3);
}









// 2nd program 

/*
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*log10(x) - 1.2;
}
float df (float x)
{
    return log10(x) + 0.43429;
}
int main()
{
    int itr, maxmitr;
    float h, x0, x1, allerr;
    printf("\nEnter x0, allowed error and maximum iterations\n");
    scanf("%f %f %d", &x0, &allerr, &maxmitr);
    for (itr=1; itr<=maxmitr; itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);
        if (fabs(h) < allerr)
        {
            printf("After %3d iterations, root = %8.6f\n", itr, x1);
            return 0;
        }
        x0=x1;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");
    return 1;
}


*/