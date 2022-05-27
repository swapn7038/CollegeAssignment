// Program to Find simple  ineterest
// principal amount - p
// number of years - n
// rate of interest - r

#include<stdio.h>
int main(){
    int p,r,n;
    float i;

    printf("Enter the principal amount \n");
    scanf("%d",&p);
    
    printf("Enter the number of years \n");
    scanf("%d",&n);

    printf("Enter the rate of interest\n");
    scanf("%d",&r);
    
    i=(p*r*n)/100;

  printf("The valus of simple interest is %lf", i);

  return 0;
    
}

// Output 
// Enter the principal amount 
// 10000 
// Enter the number of years 
// 4
// Enter the rate of interest
// 5
// The valus of simple interest is 2000.000000