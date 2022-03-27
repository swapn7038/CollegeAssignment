// prime number program 
//Swapnil Baban Shelker 
//BCS-1
//Roll NO-48
//Program number : 16


#include<stdio.h>
#include<conio.h>

int main() {
    int i,n;
    // clrscr();
    printf("\nEnter value for n:");
    scanf("%d",&n);

    for(i=2;i<n;i++) {
       if(n%i==0) {
           printf("n %d is not prime number\n",n);
           break;
       }
    }
    if(n==i){
        printf(" %d is prime number\n",n);
    }

    getch();
}

