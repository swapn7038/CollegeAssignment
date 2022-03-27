//Swapnil baban shelke 
//BCS-1 
//Roll No : 48
//Reverse Digits // Program number : 17

#include<stdio.h>

int main()
{
    int n, reverse=0, rem;

    printf("Enter any random number");
    scanf("%d", &n);

    while(n!=0) 
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;

    }
    printf("Reverse number is %d",reverse);
    return 0;
}
