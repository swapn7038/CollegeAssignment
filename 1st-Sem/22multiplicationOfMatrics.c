//Program to Multiplication of Matrices
//Swapnil Baban Shelker 
//BCS-1
//Roll NO-48
//Program number : 22

#include<stdio.h> 
#include<stdlib.h> 
int main(){
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
    system("cls");
    printf("Enter the number of rows");
    scanf("%d",&r);
    printf("Enter the number of columns");
    scanf("%d",&c);
    printf("Enter the first matrix element=\n");

    for(i=0;i<r;r++)
     {
         for(j=0;j<c;j++){
             scanf("%d",&a[i][j]);
         }
     }

     printf("multiply of matrices=\n");
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             mul[i][j]=0;
             for(k=0;k<c;k++)
             {
                 mul[i][j]+=a[i][j]*b[k][j];
             }
         }
     }

//for printing results 
for(i=0;i<r;i++)
{ 
    for(j=0;j<c;j++)
    {
        printf("%d\n",mul[i][j]);
    }
    printf("\n");
}
  return 0;
}

/*---------------------------------------------------------------- 

Enter the number of rows 3
Enter the number of columns 3
enter the first matrix elements of the matrix

1
2
3
4
5
6
6
7
7

enter the second matrix elements of the matrix

1
2
3
4
4
5
6
7
6
6

multiply of the matrix=

30 30 34
66 69 82 
83 89 108

-----------------------------------------------------------------*/

