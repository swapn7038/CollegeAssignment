// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program on macro substitution 
// Program one

#include<stdio.h>
#define square(a) a*a
int main(){
    int b,c; 
    printf("Enter b element: ");
    scanf("%d", &b);

    c=square(b); // replaces c=b*b before execution of program 
    printf("%d", c);
    return 0;  
}

// Output 
// Enter b element: 5
// 25


// Program two 
// #include<stdio.h>
// #define equation (a*b)+c
// int main(){
//     int a,b,c,d;
//     printf("Enter a, b, c elemnts: ");
//     scanf("%d %d %d ", &a, &b, &c);
//     d=equation; // replaces d=(a*b)+c before exection of program 
//     printf("%d", d); 
//     return 0; 

// }

// Output 
// Enter a, b, c elemnts: 2 2 1
// 5 