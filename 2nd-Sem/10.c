// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program on conditional compiling

#include<stdio.h>
#define x 10

int main(){
    #ifdef x
      printf("Hello \n"); // this is compiled as x is defined
    #else 
      printf("Bye\n");  // this isn`t compiled
    #endif 

    return 0; 
}



// Output 
// Hello
  




// Conditional compilation is the process of selecting which code to compile and which code
// to not compile similar to the #if / #else / #endif 
// in C 