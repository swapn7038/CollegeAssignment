// Program in C for finding greatest among two 

#include<stdio.h>
int main(){
    int a, b, c;

    printf("Enter the values of a and b \n");
    scanf("%d%d",&a,&b);

    c=(a>b) ? a:b;

    printf("%d",c);

    return 0; 
}

// Output 
// Enter the values of a and b 
// 10 20 
// 20


// Enter the values of a and b 
// 100 20  
// 100