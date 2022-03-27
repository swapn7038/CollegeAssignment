//Nested loop Program number : 14
//Swapnil baban shelke
//Class BCs-1
//Roll number : 48

#include<stdio.h> 
#include<conio.h>

int main (){
    int i,j,n;

    printf("Enter the number of rows you want: \n");
    scanf("%d", &n);
    for (i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}

// Enter the number of rows you want: 
// 5
//  *
//  * *
//  * * *
//  * * * *