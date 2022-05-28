// Gauss elimination method
#include<stdio.h>
int main()
{
    int i,j,k,n;
    float A[20][20],c,x[10],sum=0.0;
    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("A[%d][%d] : ", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    for(j=1; j<=n; j++) /* loop for the generation of upper triangular matrix*/
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    x[n]=A[n][n+1]/A[n][n];
    /* this loop is for backward substitution*/
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-sum)/A[i][i];
    }
    printf("\nThe solution is: \n");
    for(i=1; i<=n; i++)
    {
        printf("\nx%d=%f\t",i,x[i]); /* x1, x2, x3 are the required solutions*/
    }
    return(0);
}


// Output 
// Enter the order of matrix: 3

// Enter the elements of augmented matrix row-wise:

// A[1][1] : 10
// A[1][2] : -7
// A[1][3] : 3
// A[1][4] : 5
// A[2][1] : -6
// A[2][2] : 8
// A[2][3] : 4
// A[2][4] : 7
// A[3][1] : 2
// A[3][2] : 6
// A[3][3] : 9
// A[3][4] : -1

// The solution is:

// x1=-7.809086
// x2=-8.690904
// x3=7.418178






// Reference
// https://www.codewithc.com/c-program-for-gauss-elimination-method/
// https://www.codewithc.com/gauss-elimination-method-algorithm-flowchart/v