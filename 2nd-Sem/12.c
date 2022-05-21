// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program for data conversion
// Example of implicit Conversion
#include<stdio.h>
int main(){
    int x=10;  // integer x 
    char y='a'; // character c 

    // y is implicitely converted ti int. ASCII
    // value of 'a' is 97
    x=x+y; 

    // x i simplicitely converted to float 
    float z = x + 1.0; 
     
     printf("x = %d, z = %f", x, z); 

     return 0; 
}

// output 
// x = 107, z = 108.000000