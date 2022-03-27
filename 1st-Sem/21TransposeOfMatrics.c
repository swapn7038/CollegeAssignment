//Program for transpose of Matrix No. 21
//Swapnil Shelke 
//Roll No  :  48
//Class BCS-1
//

#include<stdio.h>
int main()
{
    int a[10][10], transpose[10] [10], r, c;
    printf("Enter rows and columns: \n");
    scanf("%d%d",&r,&c);

    printf("Enter matrix elements : \n");
    for(int i=0;i<r;++i)
    for(int j=0;j<c;++j){
        printf("Enter elements a%d%d: ", i+1, j+1, j+1);
        scanf("%d",&a[i][j]);
    }

    printf("\n Entered matrix : \n");
    for(int i=0;i<r;++i)
    for(int j=0;j<c;++j) {
      
       printf("%d", a[i][j]);
       if(j==c-1)
       printf("\n");
    }

    for(int i=0;i<r;++i)
    for(int j=0;j<c;++j)
    {
     transpose[j][i] = a[i][j];
    }

     printf("\nTranspose of the matrix : ");
     for(int i=0;i<r;++i)
     for(int j=0;j<c;++j) {
         printf("%d", transpose[i][j]);
       if(j==r-1)
       printf("\n");
     }
       return 0;
}