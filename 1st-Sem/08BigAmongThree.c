// Program to find greatest number among three numbers
#include<stdio.h>
int main(){
    int a,b,c,big;

    printf("Enter the three values of numbers :");
    scanf("%d%d%d",&a,&b,&c);

    big = a>b ? (a>c ? a : c) : (b>c ? b  : c);

    printf("\n The biggest number is %d", big);

    return 0;

}


// Output 
// Enter the three values of numbers :1 2 3 

// The biggest number is 3