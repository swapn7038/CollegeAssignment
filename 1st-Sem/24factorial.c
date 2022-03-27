//Swapnil Baban Shelke
//BCS -1 
//Roll No :48
//Program Number : 24
//Program for factorial => 5!=5*4*3*2*1


// 1. Factorial Program using Loops
#include<stdio.h> 
int main()
{
    int i,fact=1,number=1;
    printf("Enter a Number :");
    scanf("%d",&number); 
     for(i=1;i<=number;i++){
         fact=fact*i;
     }

     printf("Factorial of %d is %d",number, fact);

     return 0;

}

