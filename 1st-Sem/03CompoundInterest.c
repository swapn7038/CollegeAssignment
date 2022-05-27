// Program to find compound interest 
// Principal amount - p
// rate of interest - r
// No of years - n
// compound interst - ci
// amount - a
// a=(p*pow((1+(r/100)),n));
#include<stdio.h>
#include<math.h>

int main(){
int p,r,n,a;
float ci; 

printf("Enter principal amount\n");
scanf("%d",&p);

printf("Enter number of years\n");
scanf("%d",&n);

printf("Enter rate of interest \n");
scanf("%d",&r);

ci=(p*pow((1+(r/100)),n));

printf("%lf",ci);

// return 0;
}

// Output
// Enter principal amount
// 1200
// Enter number of years
// 2
// Enter rate of interest 
// 5
// 1200.000000