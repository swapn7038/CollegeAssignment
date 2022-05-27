// Program to find even or odd number


#include<stdio.h>
int main(){
    int num;

    printf("Enter any number :");
    scanf("%d",&num);

    (num%2==0) ? printf("Number is %d even \n", num) : printf("Number is %d odd", num); 

    return 0;
}

// Output 
// Enter any number :10
// Number is 10 even

// Enter any number :
// 7
// Number is 7 odd